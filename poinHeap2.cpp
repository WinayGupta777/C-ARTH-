#include "iostream"
using namespace std;

int main()
{

	int *y = (int *)malloc( 2 * sizeof(int));

	//  total = 2 * 4 byte
	//  ┌───────────────┐
	//  | | | | | | | | |
	//  └───────────────┘
	//   ^
	//   |
	//  *y
	
	y[0] = 5;
	y[1] = 14;

	cout<<"Heap Address: "<<y<<"| "<<*y<<endl;
	cout<<"+4byte Addr : "<<y+1<<"| "<<*(y+1)<<endl;

	

}
