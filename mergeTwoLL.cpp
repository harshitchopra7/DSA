#include <iostream>
#include <vector>

using namespace std;

struct Node {
	int data;
	Node *next;

	Node(int x) {
		data = x;
		next = NULL;
	}
};

void printLL(Node *head) {
	if(head == NULL) return;
	Node *curr = head;
	while(curr != NULL) {
		cout<<curr -> data<<" ";
		curr = curr -> next;
	}
	cout<<"\n";
}

Node *merge(Node *head, Node *head2, int a, int b) {
	Node *curr1 = head;
	Node *curr2 = head;
	Node *curr3 = head2;
	for (int i=0; i<a-1; i++) {
		curr1 = curr1 -> next;
	}
	for (int j=0; j<=b; j++) {
		curr2 = curr2 -> next;
	}
	while(curr3 -> next != NULL) {
		curr3 = curr3 -> next;
	}
	curr3 -> next = curr2;
	curr1 -> next = head2;
	return head;
}


int main() {
	Node *head = new Node(0);
	head -> next = new Node(1);
	head -> next -> next = new Node(2);
	head -> next -> next -> next = new Node(3);
	head -> next -> next -> next -> next = new Node(4);
	head -> next -> next -> next -> next -> next = new Node(5);

	Node *head2 = new Node(1000000);
	head2 -> next = new Node(1000001);
	head2 -> next -> next = new Node(1000002);
	// head2 -> next -> next -> next = new Node(400);
	// head2 -> next -> next -> next -> next = new Node(500);

	printLL(head);
	printLL(head2);

	head = merge(head, head2, 3, 4);
	printLL(head);

	return 0;
}