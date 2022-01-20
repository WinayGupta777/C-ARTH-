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
	bool isEmpty();
	void insertItem(int key,string value);
	void removeItem(int key);
};

//implementation
int HashTable::hashFun(int key) {
	return key % 10;
};

bool HashTable::isEmpty() {
	int sum = 0;
	for(int i=0; i<hashGroup; i++){
		sum += table[i].size();
		//.size()=will give number of node present in that LL
	}
	cout<<"No. of items: " << sum <<endl ; 
	if (sum > 0 ) {return false;}
	else {return true;}
};


void HashTable::insertItem(int key,  string value) {

	int hashCode  = hashFun(key);
	//cout<< hashCode <<endl;
	auto & cell = table[hashCode];  //just assigning !
	// table[5] will return the address of List (dll),
	// but List gives iterator, not pointer !! (so no * mark)
	cell.emplace_back(key,value);  
	// ..similar to append!:wq
	//
};
void HashTable::removeItem(int key){
	
	int hashCode  = hashFun(key);
	auto cell = table[hashCode].begin();
	cout<< "--->" << key << " removed." <<endl;
	table[hashCode].erase(cell); // .erase() is function given by STL ! 
};


void HashTable::displayTable(){

	cout << "---------------\n     TABLE    \n---------------" <<endl;
	// traversing #table   |  `HashMap`
	for(int i=0; i<hashGroup; i++){
		auto bItr = table[i].begin();
		for(  ;     bItr  !=  table[i].end()     ;bItr++){
			auto key = bItr->first;
			auto value = bItr->second;
			cout<< key<<"  |  " << value  <<endl;
		}
	}
};	


int main(){

	HashTable  h1;
	h1.insertItem(1231, "vimal");
	h1.insertItem(1421, "vijay");
	h1.insertItem(8672, "abhi");
	h1.insertItem(8673, "yash");
	h1.insertItem(8674, "eric");
	h1.insertItem(3235, "rahul");
	h1.displayTable();
	h1.removeItem(1231);
	h1.displayTable();
	//h1.isEmpty();
}
