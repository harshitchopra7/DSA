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

void print(Node *head) {
	Node *curr = head;
	while(curr != NULL) {
		cout<<curr -> data<<" ";
		curr = curr -> next;
	}
}

Node *addNodeAtEnd(Node *head, int val) {
	Node *temp = new Node(val);
	Node *curr = head;
	while(curr -> next != NULL)
	{
		curr = curr -> next;
	}
	curr -> next = temp;
	temp -> next = NULL;
	return head;
}

Node *addNodeAtBeginning(Node *head, int val) {
	Node *temp = new Node(val);
	temp -> next = head;
	return temp;
}

int main() {
	
	Node *head = new Node(10);
	head -> next = new Node(20);
	head -> next -> next = new Node(30);

	print(head);

	head = addNodeAtEnd(head, 100);

	cout<<endl;

	print(head);
	
	cout<<endl;

	head = addNodeAtBeginning(head, 200);

	print(head);

	return 0;
}
