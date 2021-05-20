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
	Node *curr = head;
	while(curr != NULL) {
		cout<<(curr -> data)<<" ";
		curr = curr -> next;
	}
}

int main() {
	Node *head = new Node(100);
	head -> next = new Node(200);
	head -> next -> next = new Node(300);
	head -> next -> next -> next = new Node(400);

	// Node *temp1 = new Node(200);
	// Node *temp2 = new Node(300);
	// Node *temp3 = new Node(400);
	// head -> next = temp1;
	// temp1 -> next = temp2;
	// temp2 -> next = temp3;

	printList(head);

	return 0;
}