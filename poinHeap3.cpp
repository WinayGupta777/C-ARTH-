#include "iostream"
using namespace std;

int main()
{

	int *y = (int *)malloc( 1 * sizeof(int));

	//  
	//  |   5   |   14  |   28  |  
	//  ┌───────┐---------------┐
	//  | | | | | | | | | | | | |
	//  └───────┘---------------┘
	//   ^       ^       ^
	//   |       |       |
	// y[0]    y[1]    y[2]
	
	/*y[0] = 5;
	  y[1] = 14;
	  y[2] = 28;*/

	for(int i =0; i<7; i++)
	{
		y[i]=i+5;
	}

	for(int i=0; i<7; i++)
	{
		cout<<i<<" Byte: "<<y+i<<" || "<<y[i]<<endl;;
	}

	/*
	cout<<"Heap Address: "<<y<<"| "<<*y<<endl;
	cout<<"+4byte Addr : "<<y+1<<"| "<<*(y+1)<<endl;
	cout<<"+4byte Addr : "<<y+2<<"| "<<*(y+2)<<endl;
	*/

}
