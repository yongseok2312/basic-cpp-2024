/*

- Parent class 
class Product : id, price, producer
- child class
class Book : ISBN, auther, title			//978-89-001-0001-01
class Handphone: model, RAM
class Computer: model, cpu, RAM

*��ü ������ �迭 ��� product[100]
* string Ŭ���� ��� ����
*����ȭ��
-----��ǰ���� ���α׷�-----
1 ��ǰ�߰� 2 ��ǰ��� 3 ��ǰ��ȸ 0 ���� 

1 or 2 or 3 �� ������ ��� 
1 å 2 �ڵ��� 3 ��ǻ��
���ø���� ��� �ش� ��ǰ�� ������ �Ŀ� �߰�, ���, �Ǵ� �˻�����ȴ�. 
*/

#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    int id;
    int price;
    string producer;
public:
    Product(int id = 0, int price = 0, string producer = "")
    {
    this->id = id;
    this->price = price;
    this->producer = producer;
    }

    int getid() const
    {
        return id;
};

int main()
{

}
















/*
class Book
{
private:
    char ISBN;
public:
    char author;
    char title;
};

*/