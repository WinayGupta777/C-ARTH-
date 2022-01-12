#include "iostream"
using namespace std;

class Vform{
public:
	int id;
	int phone;

	Vform(){
		cout<<"This default COnstructor"<<endl;
	}
	Vform(int p)
	{
		cout<<"This is Parameterized Const"<<endl;
		phone = p;
	}
};

int main()
{
	int a;   

	Vform z;

	Vform b(4321); //constructor will be called automatically!!

	cout<<b.phone<<endl;

}
