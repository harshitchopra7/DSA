#include <iostream>

using namespace std;

struct Node {
	int key;
	Node *left, *right;
	Node (int x) {
		key = x;
		left = right = NULL;
	}
};

int sizeOfBT(Node *root) {
	if (root == NULL) return 0;
	else {
		return 1 + sizeOfBT(root -> left) + sizeOfBT(root -> right);
	}	
}

int main() {
	Node *root = new Node(10);
	root -> left = new Node(20);
	root -> right = new Node(30);
	root -> left -> left = new Node(40);
	root -> left -> right = new Node(50);
	root -> right -> left = new Node(60);
	root -> right -> right = new Node(70);

	cout<<sizeOfBT(root);

	return 0;
}