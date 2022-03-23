#include<iostream>
#include<cstdlib>
using namespace std;

int main (void)
{
	int a[2][3]={{56,43,89},
				 {43,25,93}};
	int min=100,max=0;
	
	for(int i=0 ; i<2 ; i++)
	{
		for(int j=0; j<3 ;j++)
		{
			if(min > *(*(a+i)+j))
			min = *(*(a+i)+j);
			
			if(max < *(*(a+i)+j))
			max = *(*(a+i)+j);
		}
	}
	
	cout <<"min=" << min <<endl;
	cout <<"max=" << max <<endl;
	cout <<"max-min=" << max-min <<endl;			 
	
	return 0;
}