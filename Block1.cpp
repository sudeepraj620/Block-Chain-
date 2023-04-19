#include <iostream> #include <string> #include <cstdlib>
#include <ctime> using namespace std;
// Define the data structure for a block struct Block {
int index; string data;
 
int previousHash; int hash;
};
int getHash(Block b) {
// Generate the hash of the given block int hash = 0;
for (int i = 0; i < b.data.length(); i++) { hash += b.data[i];
}
return hash;
}
int main() {
// Seed the random generator srand(time(0));
// Create the genesis block Block genesis; genesis.index = 0; genesis.data
= "Genesis Block"; genesis.previousHash
= 0; genesis.hash = getHash(genesis);


// Create the blockchain	Block blockchain[10]; blockchain[0] = genesis;

// Create the remaining blocks for (int i = 1; i < 10; i++) { Block
b; b.index = i;
 
b.data = "Block " + to_string(i); b.previousHash = blockchain[i-1].hash; b.hash = getHash(b); blockchain[i]
= b;
}
// Print the blockchain for (int i = 0; i < 10; i++) {
cout << "Block " << blockchain[i].index << ": " << blockchain[i].data << ",
hash: " << blockchain[i].hash << endl;
} return 0; }
