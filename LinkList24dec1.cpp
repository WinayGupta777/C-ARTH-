#include "iostream"
using namespace std;

class Node
{
public:
	int data;
	Node *next;
};
int main()
{
	Node *a = new Node();
	Node *b = new Node();

	// This can be done where a is in Stack Mem!!
	// a.data = 13;
	a->data = 1234;

	b->data = 4567;

	//Linking both Node
	a->next = b;

	cout<<a->data<<endl;
	cout<<a->next->data<<endl;
	cout<<b->data<<endl;
}
