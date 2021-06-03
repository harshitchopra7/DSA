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

void midElement(Node *head) {
	if (head == NULL) return;

	Node *slow = head;
	Node *fast = head;

	while (fast != NULL && fast -> next != NULL) {
		slow = slow -> next;
		fast = fast -> next -> next;
	}
	cout<<slow -> data;

	// 20 -> 20 -> 20 -> 20 -> 20

}

void nthNodeFromEnd(Node *head, int n) {
	Node *t1 = head;
	Node *t2 = head;

	for (int i=0; i<n-1; i++) {
		t1 = t1 -> next;
	}
	while(t1 -> next != NULL) {
		t1 = t1 -> next;
		t2 = t2 -> next;
	}
	cout<<t2 -> data;
}

int main() {

	Node *head = new Node(10);
	head -> next = new Node(20);
	head -> next -> next = new Node(30);
	head -> next -> next -> next = new Node(40);
	head -> next -> next -> next -> next = new Node(50);

	// head = sortedInsert(head, 55);

	nthNodeFromEnd(head, 2);

	return 0;
}