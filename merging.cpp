#include "iostream"
using namespace std;

int main()
{
	int b1[] = {2,5,9};
	int b2[] = {1,4,6,8};

	int n1 = sizeof(b1) / sizeof(b1[0]);
	int n2 = sizeof(b2) / sizeof(b2[0]);

	//cout<<n1<<endl;
	//cout<<n2<<endl;
	int merge[n1 + n2];

	int ajay =0;
	int ram =0;
	int vimal = 0;
	
	while (ajay < n1 && ram < n2)
	{
		if (b1[ajay] < b2[ram])
		{ 
			cout<<"Ajay"<<endl;
			merge[vimal] = b1[ajay];
			ajay++;
			vimal++;
		}
		else{
			cout<<"Ram"<<endl;
			merge[vimal] = b2[ram];
			ram++;
			vimal++;
		}
	}
	cout<<"Array: "<<merge[vimal]<<endl;
}
