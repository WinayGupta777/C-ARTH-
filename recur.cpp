#include "iostream"
using namespace std;



void py()
{
	cout<<"Step Python 1"<<endl;
	cout<<"Step Python 2"<<endl;
}
void ml()
{
	py();
	cout<<"Step ML 1"<<endl;
	cout<<"Step ML 2"<<endl;
}
void dl()
{
	ml();
	cout<<"Step DL 1"<<endl;
	cout<<"Step DL 2"<<endl;
}

int main() 
{
	dl();
	cout<<"Main Finish!!"<<endl;	
}
