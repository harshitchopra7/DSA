#include <iostream>

using namespace std;

struct Node {
	int data;
	Node *next;
	Node (int x) {
		data = x;
		next = NULL;
	}
};

void traversalCircularLL (Node *head) {
	if (head == NULL) {
		return;
	}
	Node *curr = head -> next;
	cout<<head -> data<<" ";
	while(curr != head) {
		cout<<curr->data<<" ";
		curr = curr -> next;
	}
}

Node *deleteAtK (Node *head, int pos) {
	if (head == NULL) 
		return NULL;
	// If node at position 1 is to be deleted
	else if (pos == 1) {
		head -> data = head -> next -> data;
		Node *temp = head -> next;
		head -> next = head -> next -> next;
		delete(temp);
		return head;
	}
	else {
		Node *curr = head;
		for (int i=1; i<pos-1; i++) {
			curr = curr -> next;
		}
		Node *temp = curr -> next;
		curr -> next = curr -> next -> next;
		delete(temp);
		return head;
	}
}

int main() {
	// Node *head = NULL;
	Node *head = new Node(10);
	head -> next = new Node(20);
	head -> next -> next = new Node(30);
	head -> next -> next -> next = new Node(40);
	head -> next -> next -> next -> next = head;

	head = deleteAtK(head, 2);

	traversalCircularLL(head);

	return 0;
}