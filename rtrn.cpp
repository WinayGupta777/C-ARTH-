#include <iostream>

using namespace std;
int main()
{
	int x = 5;
	cout << x << "\n";
	cout << "Get Return code by `echo $?`\n";

	return 0;  //As we returning number, returnType would be integer for Main()

	// You can get STATUS CODE by 
	// #echo $?
}
