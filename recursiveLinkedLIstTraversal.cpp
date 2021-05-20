#include <iostream>

using namespace std;

struct Node {
	int data;
	Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

void printList(Node *head) {
	if (head == NULL) 
		return;
	cout<<(head -> data)<<" ";
	printList(head -> next);
}

int main() {
	Node *head = new Node(995);
	head -> next = new Node(996);
	head -> next -> next = new Node(997);
	head -> next -> next -> next = new Node(998);
	head -> next -> next -> next -> next = new Node(999);

	printList(head);

	return 0;
}