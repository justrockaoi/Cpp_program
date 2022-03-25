#include <iostream>
#include <cstdlib>
using namespace std;

int min(int *,int *);

int main(void)
{
	int a=32;
	int b=59;
	 
	cout << "a=" << a << ", b=" << b << endl;
	min(&a,&b);
	cout << "a=" << a << ", b=" << b << endl;
	
	return 0;
}

int min(int *x,int *y)
{
	if(*x>*y)
		return *y=100;
	else
		return *x=100;
	
}