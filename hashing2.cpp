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

public:
//prototype defination
	int hashFun(int key);
	void displayTable();	
	void insertItem(int key,string value);
	void removeItem(int key);
};

//implementation
int HashTable::hashFun(int key) {
	return key % 10;
};
void HashTable::insertItem(int key,  string value) {

	int hashCode  = hashFun(key);
	//cout<< hashCode <<endl;
	auto cell = table[hashCode];  //just assigning !
	// table[5] will return the address of List (dll),
	// but List gives iterator, not pointer !! (so no * mark)
	cell.emplace_back(key,value);  
	// ..similar to append!:wq
	//
};
void HashTable::removeItem(int key){};
void HashTable::displayTable(){};	



int main(){

	HashTable  h1;
	h1.insertItem(1234, "vimal");
}
