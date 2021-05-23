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

Node *insertAtAnyPosition (Node *head, int data, int pos) {
	Node *temp = new Node(data);
	if (pos == 1) {
		temp -> next = head;
		return temp;
	}
	Node *curr = head;
	for (int i=0; i<pos-1 && curr!=NULL; i++) {
		curr = curr -> next;
	}
	temp -> next = curr -> next;
	curr -> next = temp;
	cout<<"Added \n";
	return head;
}

int main() {

	Node *head = new Node(10);
	head -> next = new Node(20);
	head -> next -> next = new Node(30);
	head -> next -> next -> next = new Node(40);

	head = insertAtAnyPosition(head, 100, 2);

	return 0;
}