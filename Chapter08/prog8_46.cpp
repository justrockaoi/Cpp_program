#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main(void)
{
	int num;
	char month[12][15]={"January","February","March" ,"April","May","June",
						"July","August","September","November","December"};
	cout << "Enter the number of month:";
	cin >>num;
	
	cout <<"The "<< num << " of month is " <<  month[num-1] << endl;
	return 0;
}