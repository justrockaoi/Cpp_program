#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
	short a=3;
	int b =20;
	double f=2.365;
	
	cout << "a=" << a << ", " << "sizeof(a)=" << sizeof(a) << ", " << "&a=" << &a <<endl;
	cout << "b=" << b << ", " << "sizeof(b)=" << sizeof(b) << ", " << "&b=" << &b <<endl;
	cout << "f=" << f << ", " << "sizeof(f)=" << sizeof(f) << ", " << "&f=" << &f <<endl;
	
	return 0;
}