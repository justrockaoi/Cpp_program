#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
	int i ,change;
    int A[]={1,3,5,7,9};
    int B[]={2,4,6,8,10};
    int C[i];
    int lengthA = sizeof(A)/sizeof(int);
    int lengthB = sizeof(B)/sizeof(int);
   
    
    
    cout << "Elements in array A are ";
	for (int i=0; i<lengthA; i++)
        cout << A[i] << " ";
	cout << endl;
	
	cout << "Elements in array B are ";
	for (int j=0; j<lengthB; j++)
        cout << B[j] << " ";
	cout << endl;
	
	
	cout << "Elements in array C are ";
	for(int i=0;i<5;i++)
	{
		C[i]=A[i];
		cout << C[i] << " ";
	}
	for(int i=0;i<5;i++)
	{
		C[i+5]=B[i];
		cout << C[i] << " ";
	}
    system("pause");
    return 0;
}