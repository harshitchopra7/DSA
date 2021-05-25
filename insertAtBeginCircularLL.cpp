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


Node *insertAtBeginCLL (Node *head, int data) {
	Node *temp = new Node(data);
	if(head == NULL)
		temp = temp -> next;
	else {
		Node *curr = head -> next;
		while(curr -> next != head) {
			curr = curr -> next;
		}
		curr -> next = temp;
		temp -> next = head;
	}
	
	return temp;
}

Node *insertAtBeginCLLOptimised (Node *head, int data) {
	Node *temp = new Node(data);
	if (head == NULL) {
		temp = temp -> next;
		return temp;
	}
	else {
		// Inserting new node between head and (head -> next)
		temp -> next = head -> next;
		head -> next = temp;
		// Swapping value of head and temp
		int t = head -> data;
		head -> data = temp -> data;
		temp -> data = t;
		// Returning head bcoz head is not changed, only it's value is changed
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

	head = insertAtBeginCLLOptimised(head, 100);

	traversalCircularLL(head);

	return 0;
}