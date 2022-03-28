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
	cout << "Student's name:";
	getline(cin,student.name);
	cout << "Math Scorel:";
	cin>>student.math;
	cout <<"*****output*****"<<endl;
	cout << student.name <<"'s math score is "<< student.math<<" . ";
	
	return 0;	
}
	