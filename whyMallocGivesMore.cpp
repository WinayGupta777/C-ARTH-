#include "iostream"
using namespace std;

int main()
{

	int i;
	int *y = (int *)malloc(1 * sizeof(int));

	//  
	//  |   5   |   14  |   28  |  
	//  ┌───────┐---------------┐
	//  | | | | | | | | | | | | |
	//  └───────┘---------------┘
	//   ^       ^       ^
	//   |       |       |
	// y[0]    y[1]    y[2]
	
	
	// Value Assigning  // 
		
	for(int i =0; i<6; i++)
	{
		y[i]=i*5;
	}
	
	// Value Getting  // 

	for(int i=0; i<6; i++)
	{
		cout<<i+1<<"th Byte: "<<y+i<<" || "<<y[i]<<endl;
	}

	delete y;
	cin>>i;

}
