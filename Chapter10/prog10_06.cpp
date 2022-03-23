#include<iostream>
#include<cstdlib>
using namespace std;

int main (void)
{
	int *a;
	a = new int ;
	for(int i=0 ; i<5 ; i++)
	{
		a[i]=i*2;
		cout << "a[" << i << "]=" <<  a[i] << "\t";
	}	
	delete [] a;
	a=NULL;
		
	return 0;
}