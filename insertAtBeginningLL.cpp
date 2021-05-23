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

int main() {

	Node *head = NULL;
	head = insertAtBeginning(head, 10);
	cout<<head<<endl;
	head = insertAtBeginning(head, 20);
	cout<<head<<endl;
	head = insertAtBeginning(head, 30);
	cout<<head<<endl;


	return 0;
}