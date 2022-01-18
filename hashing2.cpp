#include "string"
#include "iostream"
#include "vector"
#include "list"  //doubly ll

using namespace std;


// our ADD
class HashTable {
private:
	static const int hashGroup = 10; //hash_table_size
	// STL
	list<pair<int, string>>  table[hashGroup]; //static arr
	//         |      |
	//         |      |
	//        key    value

public:
	int hashFun(int key) { return key % hashGroup; }  // key % 10
	
	void insertValue(int pos,string value){  
		
	}
};


int main(){

	HashTable  h1;

	int hashCode1 = h1.hashFun(1234); 
}
