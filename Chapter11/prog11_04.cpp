#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

struct mydata
{
	string name;
	int age;
}x;

int main(void)
{
	struct mydata y={"Lily Chen",18};	
	x=y;
	
	cout << "x.name=" << x.name << " x.age=" << x.age <<endl;
	cout << "y.name=" << y.name << " y.age=" << y.age <<endl;
	
	return 0;
}
