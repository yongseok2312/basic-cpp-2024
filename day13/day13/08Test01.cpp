/*

- Parent class 
class Product : id, price, producer
- child class
class Book : ISBN, auther, title			//978-89-001-0001-01
class Handphone: model, RAM
class Computer: model, cpu, RAM

*객체 포인터 배열 사용 product[100]
* string 클래스 사용 가능
*메인화면
-----상품관리 프로그램-----
1 상품추가 2 상품출력 3 상품조회 0 종료 

1 or 2 or 3 을 선택한 경우 
1 책 2 핸드폰 3 컴퓨터
선택목록을 띄워 해당 상품을 선택한 후에 추가, 출력, 또는 검색실행된다. 
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