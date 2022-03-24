#include<iostream>
#include<cstdlib>
using namespace std;
char *setString (char *);

int main (void)
{
	char *ptr1,*ptr2,*temp;
	ptr1=setString("Rome was not built in a day.");
	ptr2=setString("Knowledge is power.");
	
	cout << "before swap..." << endl;
    cout << "ptr1=" << ptr1 << endl;
    cout << "ptr2=" << ptr2 << endl;
	
	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
	
	cout <<endl;
	
	cout << "After swap..." << endl;
    cout << "ptr1=" << ptr1 << endl;
    cout << "ptr2=" << ptr2 << endl;
    
    delete [] ptr1;
    delete [] ptr2;
    
	return 0;	
}

char *setString (char *text)
{
	char *ptr;
	ptr = new char[strlen(text)+1];
	strcpy(ptr,text);

	return ptr;
}