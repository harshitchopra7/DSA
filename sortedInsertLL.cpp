#include <iostream>

using namespace std;

//struct ll
struct Node {
	int data;
	Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

void printLL(Node *head) {
	Node *curr = head;

	while(curr) {
		cout<<curr -> data<<" ";
		curr = curr -> next;
	}
}

Node *sortedInsert(Node *head, int val) {
	Node *temp = new Node(val);
	if (head == NULL) return temp;
	Node *curr = head;

	if (val < head -> data) {
		temp -> next = head;
		return temp;
	}

	while(curr -> next != NULL && curr -> next -> data < val) {
		curr = curr -> next;
	}
	temp -> next = curr -> next;
	curr -> next = temp;
	return head;
}


int main() {

	Node *head = new Node(10);
	head -> next = new Node(20);
	head -> next -> next = new Node(30);
	head -> next -> next -> next = new Node(40);
	head -> next -> next -> next -> next = new Node(50);

	head = sortedInsert(head, 55);

	printLL(head);

	return 0;
}