#include "iostream"
using namespace std;


/*
NEW STACK FRAME IS CREATED!!
int lw(int i,int j)
{
	return i+j;
}
*/

inline int lwnew(int i,int j)
{
	return i*j;
}

int main()
{
	cout<< lwnew(4,5) <<endl;
}

