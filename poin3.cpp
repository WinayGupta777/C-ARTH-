#include "iostream"
using namespace std;

int main()
{
	int x = 5;
	int y = 15;
	int*p,*q;
	p=&x;
	q=&y;
	cout<<"Value of *p:"<<*p<<endl;
	cout<<"Value of *q:"<<*q<<endl;
	*q=*p;
	cout<<"*q = *p"<<endl;
	cout<<"Value of *p:"<<*p<<endl;
	cout<<"Value of *q:"<<*q<<endl;


}
