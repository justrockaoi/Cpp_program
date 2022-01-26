#include<iostream>
#include<cstdlib>
using namespace std;

void reverse(char a[], char b[]);

int main(void)
{
	char ch[5];
	char chr[5];
	cout << "Enter  a string:" ;
	cin.getline(ch,5);
	
	reverse(ch,chr);
    
	cout << chr <<endl;  
	
	system("pause");
	return 0;
}

void reverse(char a[5], char b[5])
{	
	for(int i=0 ; i<5 ;i++)
	{
		b[3-i] = a[i];
	}

}