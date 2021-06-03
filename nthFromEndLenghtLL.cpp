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
	Node *curr = head;
	int count = 0;
	while(curr != NULL) {
		count++;
		curr = curr -> next;
	}
	if (count < n) return;
	curr = head;
	int iteration = count - n + 1;
	for (int i=1; i<iteration; i++) {
		curr = curr -> next;
	}
	cout<<curr -> data;
}


int main() {

	Node *head = new Node(10);
	head -> next = new Node(20);
	head -> next -> next = new Node(30);
	head -> next -> next -> next = new Node(40);
	head -> next -> next -> next -> next = new Node(50);

	// head = sortedInsert(head, 55);

	nthNodeFromEnd(head, 3);

	return 0;
}