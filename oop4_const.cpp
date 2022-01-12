#include "iostream"
using namespace std;

class Vform{
public:
	int id;
	int phone;

	Vform(int p)
	{
		cout<<"Hello I Constructor !!"<<endl;
		phone = p;
	}
};

int main()
{
	int a;   

	Vform b(4321); //constructor will be called automatically!!

	cout<<b.phone;

}
