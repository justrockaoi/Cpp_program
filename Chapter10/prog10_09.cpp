#include<iostream>
#include<cstdlib>
using namespace std;

int main (void)
{
	int a[2][3]={{12,25,43},
				 {21,45,33}};
	
	int b[2][3]={{19,22,30},
				 {11,35,18}};
	
	for(int i=0 ; i<2 ;i++)
	{
		for(int j=0 ; j<3 ; j++)
		{
			cout << "a[" << i+1 << "][" << j+1 << "]=" <<  *(*(a+i)+j) << "\t";
		}
		cout <<endl;
	}
	cout <<endl;
	
	for(int i=0 ; i<2 ;i++)
	{
		for(int j=0 ; j<3 ; j++)
		{
			cout << "b[" << i+1 << "][" << j+1 << "]=" <<  *(*(b+i)+j) << "\t";
		}
		cout <<endl;
	}
	cout <<endl;
	
	for(int i=0 ; i<2 ;i++)
	{
		for(int j=0 ; j<3 ; j++)
		{
			cout << "a[" << i+1 << "][" << j+1 << "]" << "+b[" << i+1 << "][" << j+1 <<"]=";
			cout <<  *(*(a+i)+j)+*(*(b+i)+j) <<"\t";
		}
		cout <<endl;
	}
	
	
	
	 return 0;
}