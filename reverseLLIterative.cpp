#include <iostream>
#include <vector>

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

Node *reverseIterative(Node *head) {
	vector<int> v;
	for (Node *curr = head; curr != NULL; curr = curr -> next) {
		v.push_back(curr -> data);
	}
	for (Node *curr = head; curr != NULL; curr = curr -> next) {
		curr -> data = v.back();
		v.pop_back();
	}
	return head;
}

// Change all the links in backward direction
Node *reverseIterativeOptimised(Node *head) {
	Node *curr = head;
	Node *prev = NULL;
	while(curr != NULL) {
		Node *next = curr -> next;
		curr -> next = prev;
		prev = curr;
		curr = next;
	}
	return prev;
}

int main() {

	Node *head = new Node(10);
	head -> next = new Node(200);
	head -> next -> next = new Node(30);
	head -> next -> next -> next = new Node(40);
	head -> next -> next -> next -> next = new Node(500);

	// head = sortedInsert(head, 55);

	head = reverseIterativeOptimised(head);

	printLL(head);

	return 0;
}