#include "iostream"
using namespace std;



int lwsum(int i)
{
	int t;
	int y = i-1;
	if (y>=0)
	{
		t = lwsum(y);
	}
	return t + i; 
}

int main() 
{
	int i;
	cout<<"Enter number: ";
	cin>>i;
	int sum = lwsum(i);
	cout<<sum<<endl;	
	cout<<"Main Finish!!"<<endl;	
}
