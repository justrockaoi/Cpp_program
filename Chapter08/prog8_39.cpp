#include<iostream>
#include<cstdlib>
using namespace std;

char reverse(char a[], char b[]);

int main(void)
{
	char ch[4];
	char chr[4];
	cout << "Enter  a string:" ;
	cin.getline(ch,5);
    
	reverse(ch,chr);
    
	cout << chr <<endl;  
	
	system("pause");
	return 0;
}

char reverse(char a[4], char b[4])
{	
	for(int i=0 ; i<4 ;i++)
	{
		b[3-i] = a[i];
	}

	return b[4];
}
