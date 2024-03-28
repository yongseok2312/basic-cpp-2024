#include <iostream>
#include <string>
#include <vector>
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
    virtual void printInfo() const = 0; // ���� �Լ��� ����
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
    HandPhone(int id, int price, string producer, string model, int RAM) : Product(id, price, producer), model(model), RAM(RAM) {}
    void printInfo() const override {
        cout << "ID: " << getId() << endl;
        cout << "����: " << getPrice() << endl;
        cout << "������: " << getProducer() << endl;
        cout << "��: " << model << endl;
        cout << "RAM: " << RAM << "GB" << endl;
    }
};

class Computer : public Product {
private:
    string model;
    string cpu;
    int RAM;

public:
    Computer(int id, int price, string producer, string model, string cpu, int RAM) : Product(id, price, producer), model(model), cpu(cpu), RAM(RAM) {}
    void printInfo() const override {
        cout << "ID: " << getId() << endl;
        cout << "����: " << getPrice() << endl;
        cout << "������: " << getProducer() << endl;
        cout << "��: " << model << endl;
        cout << "CPU: " << cpu << endl;
        cout << "RAM: " << RAM << "GB" << endl;
    }
};

class ProductManager {
private:
    vector<Product*> products;

public:
    ~ProductManager() {
        for (Product* p : products) {
            delete p;
        }
    }

    void addProduct(Product* product) {
        products.push_back(product);
    }

    void printProductsByType(int type) const {
        cout << "��ǰ�� ����մϴ�:" << endl;
        for (Product* p : products) {
            if ((type == 1 && dynamic_cast<Book*>(p)) ||
                (type == 2 && dynamic_cast<HandPhone*>(p)) ||
                (type == 3 && dynamic_cast<Computer*>(p))) {
                p->printInfo();
                cout << endl;
            }
        }
    }

    Product* findProductById(int id) const {
        for (Product* p : products) {
            if (p->getId() == id) {
                return p;
            }
        }
        return nullptr;
    }
};

int main() {
    ProductManager productManager;
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
                productManager.addProduct(new Book(id, price, producer, ISBN, author, title));
                break;
            case 2:
                cout << "��: ";
                cin >> model;
                cout << "RAM (GB): ";
                cin >> RAM;
                productManager.addProduct(new HandPhone(id, price, producer, model, RAM));
                break;
            case 3:
                cout << "��: ";
                cin >> model;
                cout << "CPU: ";
                cin >> cpu;
                cout << "RAM (GB): ";
                cin >> RAM;
                productManager.addProduct(new Computer(id, price, producer, model, cpu, RAM));
                break;
            default:
                cout << "�߸��� ���� ����!" << endl;
                break;
            }
            cout << "��ǰ�� �߰��Ǿ����ϴ�." << endl;
            break;
            }
            case 0:
                cout << "���α׷��� �����մϴ�." << endl;
                return 0;
            default:
                cout << "�߸��� ����!" << endl;
            break;
        }
    }
    return 0;
}
