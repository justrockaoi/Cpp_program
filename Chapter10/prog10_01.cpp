#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
	int n=20,*p,**pp;
	p=&n;
	pp=&p;
	cout << "n=" << n << ", &n=" <<&n <<endl;
	cout << "*p=" << *p << ", p=" << p << ", &p=" << &p << endl;
	cout << "*(*pp)=" << *(*pp) << ", *pp=" << *pp << ", pp=" << pp << ", &pp =" << &pp << endl;
	return 0;
}