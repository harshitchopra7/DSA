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

Node *insertAtEnd (Node *head, int x) {
	Node *temp = new Node(x);
	if (head==NULL) {
		return head;
	}
	Node *curr = head;
	while(head != NULL) {
		curr = curr -> next;
	}
	curr -> next = temp;
	return head;
}

int main() {

	Node *head = NULL;
	head = insertAtEnd(head, 10);
	cout<<head<<endl;
	head = insertAtEnd(head, 20);
	cout<<head<<endl;
	head = insertAtEnd(head, 30);
	cout<<head<<endl;

	return 0;
}