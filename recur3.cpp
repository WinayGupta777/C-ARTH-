#include "iostream"
using namespace std;

//Head recurtion
int lw1(int n)
{
	if(n==0)
	{ 
		return 0; 
	}

	return lw1(n - 1) + n;	
}

int long lw2(int long n)
{
	int long sum;
	sum = n*(n+1)/2;
	return sum;
}

int lw3(int n)
{
	int i = 0;
	int sum;
	for(i;i<=n;i++)
	{
		sum = sum + i;
		i = i+1;
	}
	return sum;
}

int main()
{
	int x;
	int long a;
	cout<<"Enter:";
	cin>>x;
	a = lw3(x);
	cout<<a<<endl;
}




