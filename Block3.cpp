3.	#include <iostream> #include
<string>
#include <vector> using namespace std;

//Blockchain class to define the blocks in the chain class BlockChain { public:
string data;
BlockChain *next;
};

//Linked List class to define the chain of blocks class LinkedList { public: BlockChain *head;
LinkedList() { head= NULL;} void addBlock(string data) {
BlockChain *newBlock = new BlockChain(); newBlock>data
= data;
newBlock>next = NULL;	if (head == NULL) {
head = newBlock;
} else
{
BlockChain *current = head; while (current->next != NULL) { current
= current->next;
}
current->next = newBlock;
}
}
void printBlocks() { BlockChain
*current = head;	while (current != NULL) {
cout << current->data << endl; current = current->next;
}}};
 
//AI class to define the AI for the blockchain class AI {
public:
LinkedList *chain;

AI() {
chain = new LinkedList();
}

//Function to generate a new block void generateBlock(string data) { chain->addBlock(data);
}

//Function to validate the blocks in the chain bool validateChain() {
BlockChain *current = chain->head; while (current != NULL) {
if (current->data != "Valid Block") { return false;
}
current = current->next;
} return true;}};

int main() {
AI *ai = new AI(); ai>generateBlock("Valid Block"); ai>generateBlock("Valid Block"); ai>generateBlock("Valid Block"); ai>chain->printBlocks(); cout << ai>validateChain() << endl;
return 0;
}
