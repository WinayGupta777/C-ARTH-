#include "iostream"
using namespace std;

class Student
{
public:
	int id;
	int phone;
};
int main()
{
	Student s1;  //s1 will take space from static mem!
	cout<<&s1<<endl; //0x7ffd7ac3ef60

	// For takin space from HEAP
	// As it will return address from heap mem, we need pointer!
	Student *s2 = new Student;
	cout<<s2<<endl;  //0x1e862c0
}
