#include "iostream"
using namespace std;

class Vform{
//By default everything is private!
public:
	int id;
	int phone;

	void lw(){
		cout<<"Hello Redhat"<<endl;
	}
};

int main()
{
	int a;   
	// 'int' is inbuilt dt..!
	// It will take  '4 byte'

	Vform b; 
	// This is my own DataType!
	// This will take '4+4=8 byte'

	cout<<a<<endl;
	b.lw();



}
