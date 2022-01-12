#include "iostream"

using namespace std;

int main()
{
	int a[] = {2,5,6,9};
	/*
	//both are giving same output
	cout<<a<<endl;
	cout<<&a<<endl;
	// what is difference between these??
	cout<<a+1<<endl;
	cout<<&a+1<<endl;
	*/


	// Size of Array
	cout<<*(&a+1)-a<<endl;

	cout << sizeof(a) / sizeof(a[0]) << endl;
	
}
