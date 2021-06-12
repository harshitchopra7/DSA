#include <iostream>

using namespace std;

struct Node {
	int key;
	Node *left;
	Node *right;
	Node(int k) {
		key = k;
		left = right = NULL;
	}	
};

void inorder(Node *root) {
	if (root != NULL) {
		inorder(root -> left);
		cout<<(root -> key)<<" ";
		inorder(root -> right);
	}
}

void preorder(Node *root) {
	if (root != NULL) {
		cout<<(root -> key)<<" ";
		preorder(root -> left);
		preorder(root -> right);
	}
}

void postorder(Node *root) {
	if (root != NULL) {
		postorder(root -> left);
		postorder(root -> right);
		cout<<(root -> key)<<" ";
	}
}

int height(Node *root) {
	if (root == NULL)
		return 0;
	else
		return max(height(root -> left), height(root -> right)) + 1;
}

void printKDist(Node *root, int k) {
	if (root == NULL)
		return;
	if (k == 0)
		cout<<(root -> key)<<" ";
	else {
		printKDist(root -> left, k-1);
		printKDist(root -> right, k-1);
	}
}

void BFS(Node *root, int h) {
	if (root == NULL)
		return;
	if (h == 0)
		return;
	else {
		cout<<(root -> key)<<" ";
		BFS(root -> left, h-1);
		BFS(root -> right, h-1);
	}
}

int main() {
	Node *root = new Node(10);
	root -> left = new Node(20);
	root -> right = new Node(30);
	root -> left -> left = new Node(40);
	root -> left -> right = new Node(50);

	int h = height(root);

	BFS(root, h);

	return 0;
}