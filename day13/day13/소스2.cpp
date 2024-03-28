#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    int id;
    int price;
    string producer;

public:
    Product(int id, int price, string producer) : id(id), price(price), producer(producer) {}
    virtual ~Product() {}

    int getId() const {
        return id;
    }

    int getPrice() const {
        return price;
    }

    string getProducer() const {
        return producer;
    }

    virtual void printInfo() const = 0; // ���� ���� �Լ�
};

class Book : public Product {
private:
    string ISBN;
    string author;
    string title;

public:
    Book(int id, int price, string producer, string ISBN, string author, string title)
        : Product(id, price, producer), ISBN(ISBN), author(author), title(title) {}

    void printInfo() const override {
        cout << "ID: " << getId() << endl;
        cout << "����: " << getPrice() << endl;
        cout << "������: " << getProducer() << endl;
        cout << "ISBN: " << ISBN << endl;
        cout << "����: " << author << endl;
        cout << "����: " << title << endl;
    }
};

class HandPhone : public Product {
private:
    string model;
    int RAM;

public:
    HandPhone(int id, int price, string producer, string model, int RAM)
        : Product(id, price, producer), model(model), RAM(RAM) {}

    void printInfo() const override {
        cout << "ID: " << getId() << endl;
        cout << "����: " << getPrice() << endl;
        cout << "������: " << getProducer() << endl;
        cout << "Model: " << model << endl;
        cout << "RAM: " << RAM << "GB" << endl;
    }
};

class Computer : public Product {
private:
    string model;
    string cpu;
    int RAM;

public:
    Computer(int id, int price, string producer, string model, string cpu, int RAM)
        : Product(id, price, producer), model(model), cpu(cpu), RAM(RAM) {}

    void printInfo() const override {
        cout << "ID: " << getId() << endl;
        cout << "����: " << getPrice() << endl;
        cout << "������: " << getProducer() << endl;
        cout << "Model: " << model << endl;
        cout << "CPU: " << cpu << endl;
        cout << "RAM: " << RAM << "GB" << endl;
    }
};

// ��ǰ ��� �Լ�
void printProductsByType(Product* products[], int numProducts, int type) {
    cout << "Printing products:" << endl;
    for (int i = 0; i < numProducts; ++i) {
        if ((type == 1 && dynamic_cast<Book*>(products[i])) ||
            (type == 2 && dynamic_cast<HandPhone*>(products[i])) ||
            (type == 3 && dynamic_cast<Computer*>(products[i]))) {
            cout << "Product " << i + 1 << ":" << endl;
            products[i]->printInfo();
            cout << endl;
        }
    }
}

int main() {
    const int MAX_PRODUCTS = 100;
    Product* products[MAX_PRODUCTS]; // ��ü ������ �迭

    int numProducts = 0;
    int choice;

    while (true) {
        cout << "------ ��ǰ ���� ���α׷� ------" << endl;
        cout << "1. ��ǰ �߰�\n2. ��ǰ ���\n3. ��ǰ �˻�\n0. ����\n";
        cout << "���ϴ� �۾��� �����ϼ���: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            int type;
            cout << "�߰��� ��ǰ�� ������ �����ϼ���:\n1. å\n2. �ڵ���\n3. ��ǻ��\n";
            cin >> type;

            int id, price, RAM;
            string producer, ISBN, author, title, model, cpu;

            cout << "��ǰ ������ �Է��ϼ���:" << endl;
            cout << "ID: ";
            cin >> id;
            cout << "����: ";
            cin >> price;
            cout << "������: ";
            cin >> producer;

            switch (type) {
            case 1:
                cout << "ISBN: ";
                cin >> ISBN;
                cout << "����: ";
                cin >> author;
                cout << "����: ";
                cin >> title;
                products[numProducts++] = new Book(id, price, producer, ISBN, author, title);
                break;
            case 2:
                cout << "��: ";
                cin >> model;
                cout << "RAM (GB): ";
                cin >> RAM;
                products[numProducts++] = new HandPhone(id, price, producer, model, RAM);
                break;
            case 3:
                cout << "��: ";
                cin >> model;
                cout << "CPU: ";
                cin >> cpu;
                cout << "RAM (GB): ";
                cin >> RAM;
                products[numProducts++] = new Computer(id, price, producer, model, cpu, RAM);
                break;
            default:
                cout << "�߸��� ���� ����!" << endl;
                break;
            }
            cout << "��ǰ�� �߰��Ǿ����ϴ�." << endl;
            break;
        }
        case 2: {
            int type;
            cout << "����� ��ǰ�� ������ �����ϼ���:\n1. å\n2. �ڵ���\n3. ��ǻ��\n";
            cin >> type;
            printProductsByType(products, numProducts, type);
            break;
        }
        case 3: {
            int searchId;
            cout << "�˻��� ��ǰ�� ID�� �Է��ϼ���: ";
            cin >> searchId;
            bool found = false;
            for (int i = 0; i < numProducts; ++i) {
                if (products[i]->getId() == searchId) {
                    found = true;
                    cout << "��ǰ�� ã�ҽ��ϴ�:" << endl;
                    products[i]->printInfo();
                    break;
                }
            }
            if (!found) {
                cout << "��ǰ�� ã�� �� �����ϴ�!" << endl;
            }
            break;
        }
        case 0:
            // �Ҵ�� �޸� ����
            for (int i = 0; i < numProducts; ++i) {
                delete products[i];
            }
            cout << "���α׷��� �����մϴ�." << endl;
            return 0;
        default:
            cout << "�߸��� �����Դϴ�. �ٽ� �õ��ϼ���." << endl;
            break;
        }
    }

    return 0;
}