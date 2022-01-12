#include "iostream"
using namespace std;

int main()
{
	int x = 5;

	int* z; 
	//just initialized 
	// not given reference

	cout<<x<<endl;
	cout<<&x<<endl;
	//dereference | means fetch the value
	//but what it will fetch ??
	cout<<z<<endl;
	cout<<*z<<endl;
}
