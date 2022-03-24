#include<iostream>
#include<cstdlib>
using namespace std;

int main (void)
{
	int *a;
	a = new int[2];
	
	cout << "Input the First Number:";
	cin >> a[0];
	cout << "Input the Second Number:";
	cin >> a[1];
	
	cout <<a[0] << "*" << a[1] <<"=" << a[0]*a[1]<< endl;
	delete [] a;
	a=NULL;
	
	return 0;	
}