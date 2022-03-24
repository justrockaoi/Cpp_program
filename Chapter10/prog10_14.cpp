#include<iostream>
#include<cstdlib>
using namespace std;

int main (void)
{
	int *a, *b ,*c;
	 
	a=new int[3];
	b=new int[3];
	c=new int[3];
	
	cout <<"a[3]=[ ";
	for(int i=0 ; i<3;i++)
	{
		a[i]=i+1;
		cout << a[i] <<" ";
	}
	cout << "]"<<endl;
	
	cout <<"a[3]=[ ";
	for(int i=0 ; i<3;i++)
	{
		b[i]=(i+1)*2;
		cout << b[i] <<" ";
	}
	cout << "]"<<endl;
	
	cout <<"c[3]=[ ";
	for(int i=0 ; i<3;i++)
	{
		c[i]=a[i]+b[i];
		cout << c[i] <<" ";
	}
	cout << "]"<<endl;
	
	delete [] a;
	delete [] b;
	delete [] c;
	
	a=NULL;
	b=NULL;
	c=NULL;
	
	return 0;	
}