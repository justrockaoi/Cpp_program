#include<iostream>
#include<cstdlib>
using namespace std;

int main (void)
{
	int arr[2][4]={{2,3,4,5},{6,7,8,9}};
	
	cout << "arr=" << arr <<endl;
	cout << endl;
	
	cout <<"arr[0]=" << arr[0] <<", arr[1]=" <<arr[1]<<endl;
	cout << endl;
	
	cout << "*(arr+0)=" << *(arr+0) <<", *(arr+1)=" << *(arr+1) <<endl;
	cout << endl;
	
	cout << "*(arr+1)+0=" << *(arr+1)+0 <<", *(arr+1)+1=" << *(arr+1)+1;
	cout << ", *(arr+1)+2=" << *(arr+1)+2 <<", *(arr+1)+3=" << *(arr+1)+3 << endl;
	cout << endl;
	
	cout << "*(*(arr+1)+0)=" << *(*(arr+1)+0) <<", *(*(arr+1)+1)=" << *(*(arr+1)+1);
	cout << ", *(*(arr+1)+2)=" << *(*(arr+1)+2) <<", *(*(arr+1)+3)=" << *(*(arr+1)+3) << endl;
	 
	return 0;
}