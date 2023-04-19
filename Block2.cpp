2.	#include <iostream> #include <string> #include <vector> #include <algorithm>

// A Blockchain class class Blockchain
{
public:
// Constructor Blockchain();
// Add a new block to the chain void addBlock(std::string data);
// Get the most recently added block std::string getLastBlock();
// Get the chain length int getChainLength();
private:
std::vector<std::string> chain;

};


// Constructor Blockchain::Blockchain()
 
{

// Create the genesis block	std::string genesisBlock = "Genesis
Block"; chain.push_back(genesisBlock);
}

// Add a new block
void Blockchain::addBlock(std::string data)
{


chain.push_back(data);
}



// Get the most recently added block std::string Blockchain::getLastBlock()
{


return chain.back();
}



// Get the chain length int Blockchain::getChainLength()
{


return chain.size();
}
 
int main()
{

// Create a new Blockchain Blockchain blockchain;

//	Add	some	blocks blockchain.addBlock("Block 1");
blockchain.addBlock("Block 2");
blockchain.addBlock("Block 3");

// Output the chain length
std::cout << "Chain length: " << blockchain.getChainLength() << std::endl;


// Output the last block
std::cout << "Last block: " << blockchain.getLastBlock()
<< std::endl; return 0;
}
