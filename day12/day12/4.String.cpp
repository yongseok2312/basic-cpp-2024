#include <iostream>
using namespace std;


int main() {
	int code = 97;
	cout << code << endl;
	cout << (char)code << endl;
	cout << "-------------" << endl;
	char ary[] = { 'a','b','c','d','e' };
	cout << ary << endl;
	cout << "-------------" << endl;
	char ary1[6] = { 'a','b','c','d','e' };
	cout << ary1 << endl;
	cout << "-------------" << endl;
	cout << sizeof(ary1) << endl;
	cout << strlen(ary1) << endl;
	char str[] = "string";
	cout << str << endl;
	cout << sizeof(str) << endl;
	const char* pstr = "STRING";
	cout << pstr << endl;
	cout << sizeof(pstr) << endl;
	cout << "-------------" << endl;
	string s = "string";
	cout << s << endl;
	cout << sizeof(s) << endl;
	cout << s.size() << endl;
	return 0;
}