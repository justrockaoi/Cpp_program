#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
	int a[3]={5,7,9};
	int i,sum=0;
	int *ptr = a;
	for(i=0 ; i<3 ;i++)
		sum+=*(ptr++);
		
	cout << "sum=" << sum << endl;
	
	return 0;
}