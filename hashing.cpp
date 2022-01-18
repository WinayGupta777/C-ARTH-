#include "string"
#include "iostream"
#include "vector"
using namespace std;

// ..that array is also known as HashTable !!
// ..and this array will create by our own !! 
// (so user defined DS)
class HashTable {
private:
	static const int hashGroup = 10; //hash_table_size
	//string table[hashGroup];   //this is our array!	
	vector<string>  table[hashGroup];
public:
	int hashFun(int key) { return key % hashGroup; }  // key % 10
};


int main(){
	HashTable  h1;

	cout << h1.hashFun(1234);
}
