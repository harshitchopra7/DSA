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


Node *deleteHead (Node *head) {
	if (head == NULL)
		return NULL;
	if (head -> next == head) 
		return NULL;
	else {
		Node *temp = head -> next;
		Node *curr = head;
		while(curr -> next != head) {
			curr = curr -> next;
		} 
		delete(head);
		curr -> next = temp;
		return temp;
	}
}

Node *deleteHeadOptimised (Node *head) {
	if (head == NULL)
		return NULL;
	if (head -> next == head) {
		delete(head);
		return NULL;
	}
	else {
		head -> data = head -> next -> data;
		Node *temp = head -> next;
		head -> next = head -> next -> next;
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

	head = deleteHeadOptimised(head);

	traversalCircularLL(head);

	return 0;
}