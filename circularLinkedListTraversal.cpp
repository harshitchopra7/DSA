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

//For Loop
// void traversalCircularLL (Node *head) {
// 	if (head == NULL) 
// 		return;
// 	cout<<head -> data<<" ";
// 	for (Node *p=head -> next; p!=head; p=p->next) {
// 		cout<<(p -> data)<<" ";
// 	}
// }


// While Loop
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

// Do While
// void traversalCircularLL (Node *head) {
// 	if (head == NULL)
// 		return;
// 	Node *curr = head;
// 	do {
// 		cout<<curr -> data<<" ";
// 		curr = curr -> next;
// 	} while (curr != head);
// }

int main() {
	Node *head = new Node(10);
	head -> next = new Node(20);
	head -> next -> next = new Node(30);
	head -> next -> next -> next = new Node(40);
	head -> next -> next -> next -> next = head;

	traversalCircularLL(head);

	return 0;
}