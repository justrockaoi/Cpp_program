#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

struct mydata
{
	string name;
	int math;
}student={"Marty Wang",74};

int main(void)
{
	cout << "Student's name:" << student.name <<endl;
	cout << "math score=" << student.math <<endl;	
	
	return 0;
}
