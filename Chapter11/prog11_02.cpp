#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

struct mydata
{
	string name;
	int math;
}student;

int main (void)
{
	cout << "sizeof(student)=" << sizeof(student) << endl;  
	
	return 0;	
}
	