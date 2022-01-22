#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{	
	int total,sum=0;
	int PDT[5]={12,16,10,14,15}; //A=12 B=16 C=10 D=14 E=15
	int sales[3][5]={{33,32,56,45,33},
					 {77,33,68,45,23},
					 {43,55,43,67,65}};
	int saler[3];
	int max=0;
	
	cout << "1.Calculate Each Saler Total" << endl;				 
	for(int i=0;i<3;i++) 
	{				 
		cout << "Num" << i+1 <<" total sale is "; 				 
		
		for(int j=0 ;j<5; j++)
		{
			total = PDT[j]*sales[i][j];	
			sum +=total;		
		}
		
		saler[i]=sum;
		if(saler[i]>max)
			max = saler[i];
			
		cout <<sum << endl;	
	}
	sum=0;
	cout << endl;
	
	////////////////////////////////////////////////////////
	
	
	cout << "2.Each Product Total" << endl;
	
	for(int j =0 ;j<5; j++)
	{
		sum=0;
		cout << "Product " << j <<":";
		for(int i =0 ;i<3; i++)
		{
			total = PDT[j]*sales[i][j];
			sum +=total;	
		}	
		cout <<sum << endl;	
	}
	cout << endl;
	//////////////////////////////////////////////////////////
	
	
	cout << max <<endl;
	
	system("pause");
	return 0;
}