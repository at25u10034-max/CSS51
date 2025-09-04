#include <stdlib.h>
#include <stdbool.h>

#define SIZE_LEAF 1024
#define SIZE_STEM 64

/*
#define NEW_NODETYPE(type) typedef struct Node_##type## {\\
	Node_##type##* HEAD;\\
	Node_##type##* NEXT;\\
	type##[SIZE_LEAF] data;\\
}
*/

// NEW_NODETYPE(int) will give:
typedef struct ParentNode {
	ParentNode* parent;
	Box[SIZE_STEM] children;
} ParentNode;


typedef struct Box_int {
	ParentNode* parent;
	int data;
} Box;


Node* getbox(Node* HEAD, size_t idx) {
	if (size_t < SIZE_STEM) return HEAD->children[idx];
	if (HEAD->parent == NULL) {
		HEAD->parent = {};
	}


}

void store(int val, size_t idx, ParentNode* Box, size_t size){

};


int main() {
	Node* HEAD = {};
	return 0;
}
