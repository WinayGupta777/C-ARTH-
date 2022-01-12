#include "iostream"
using namespace std;

int main()
{
	int x; 
	//This will take mem from Stack Memory

	//int y = malloc(4);
	//This will take mem from Heap Memory
	//Also, it will return 
	//the address of that 4 byte!
	int *y   =   (int *)malloc(4);
	//   ^           ^         ^
	//   |           |         |
	// Stores       cvt       byte
	// Address   into addr


	cout<<"Stack Address:"<<&x<<endl;	
	cout<<"Heap Address: "<<y<<endl;

	

}
