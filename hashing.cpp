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
	
	void insertValue(int pos,string value){  
		//for ins, you need index & value,
		//and here index will be taken from hashFun()
		//it will give us 'hash_code' means 'pos'
		
		// table[pos] = "vim";  (This is not the way!!)
	}
};


int main(){
	HashTable  h1;
	HashTable  h2;

	int hashCode1 = h1.hashFun(1234);  //  '4'  <--code
	int hashCode2 = h2.hashFun(8934);  //  '4'  <--code
	//h1.insertValue(hashCode, "vimal");
}
