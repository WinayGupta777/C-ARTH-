#include "string"
#include "iostream"
#include "vector"
using namespace std;

class HashTable {
private:
	static const int hashGroup = 10; //hash_table_size
	vector<string>  table[hashGroup];
public:
	int hashFun(int key) { return key % hashGroup; }  // key % 10
	
	void insertValue(int pos,string value){  
		
	}
};


int main(){

	HashTable  h1;

	int hashCode1 = h1.hashFun(1234); 
}
