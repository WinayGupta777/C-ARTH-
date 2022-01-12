#include "iostream"
using namespace std;

class Student
{
private:
	int id;
	int phone;

public:
	// camelCase
	
	//SETTER //mutator
	void setId(int i){
		id = i;
	}
	void setPhone(int p){
		phone = p;
	}
	//GETTER //accessor
	void getAll(){
		cout<<"Id is=>"<<id<<endl;
		cout<<"Phone is=>"<<phone<<endl;
	}
};
int main()
{
	Student s1;  
	//cout<<&s1<<endl; 

	// Logically wrong
	//	s1.id = -5; 
	s1.setId(13);
	s1.setPhone(9999);
	s1.getAll();

}
