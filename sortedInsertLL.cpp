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

Node *insertAtBeginning (Node *head, int x) {
	Node *temp = new Node(x);
	temp -> next = head;
	return temp;
}

Node *sortedInsert (Node *head, int val) {
	Node *temp = new Node(val);
	if (head == NULL) {
		head = temp;
		return head;
	}
	if (val < head -> data) {
		temp -> next = head;
		return temp;
	}
	Node *curr = head;
	while((curr -> next -> data < val) && (curr -> next != NULL)) {
		curr = curr -> next;
	}
	temp -> next = curr -> next;
	curr -> next = temp;
	return head;
}

int main() {
	// Node *head = new Node(995);
	// head -> next = new Node(996);
	// head -> next -> next = new Node(997);
	// head -> next -> next -> next = new Node(998);
	// head -> next -> next -> next -> next = new Node(999);

	// int key = 99;
	// cout<<recursiveLinkedListSearch(head, key);

	Node *head = NULL;
	head = insertAtBeginning(head, 10);
	cout<<head<<endl;
	head = insertAtBeginning(head, 20);
	cout<<head<<endl;
	head = insertAtBeginning(head, 30);
	cout<<head<<endl;

	// head = deleteAtBegin(head);
	// cout<<head<<endl;
	// head = deleteAtBegin(head);
	// cout<<head<<endl;
	// head = deleteAtBegin(head);
	// cout<<head<<endl;

	head = sortedInsert(head, 25);
	cout<<head<<endl;



	return 0;
}