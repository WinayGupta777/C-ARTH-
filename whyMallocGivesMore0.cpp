#include "iostream"
using namespace std;

int main()
{

	int *y = (int *)malloc(2 * sizeof(int));

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
	y[2] = 28;
	y[3] = 2;
	y[4] = 8;*/
	
	for(int i =0; i<6; i++)
	{
		y[i]=i+5;
	}

	for(int i=0; i<6; i++)
	{
		cout<<i+1<<" Byte: "<<y+i<<" || "<<y[i]<<endl;;
	}
	free(y);
	/*
	cout<<"Heap Address: "<<y<<"| "<<*y<<endl;
	cout<<"+4byte Addr : "<<y+1<<"| "<<*(y+1)<<endl;
	cout<<"+4byte Addr : "<<y+2<<"| "<<*(y+2)<<endl;	
	cout<<"+4byte Addr : "<<y+3<<"| "<<*(y+3)<<endl;
	cout<<"+4byte Addr : "<<y+4<<"| "<<*(y+4)<<endl;
	*/
}
