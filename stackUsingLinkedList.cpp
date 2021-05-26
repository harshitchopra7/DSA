#include <iostream>
#include <vector>

using namespace std;

//Linked List Representation
struct Node {
	int data;
	Node *next;
	Node (int x) {
		data = x;
		next = NULL;
	}
};

struct LLStack {
	Node *head;
	int sizeOfStack;
	LLStack() {
		head = NULL;
		sizeOfStack = 0;
	}

	//Push
	void push(int x) {
		Node *temp = new Node(x);
		temp -> next = head;
		head = temp;
		sizeOfStack++;
	}

	//POP
	int pop() {
		if (head == NULL)
			return -1;
		int res = head -> data;
		Node *temp = head;
		head = head -> next;
		delete(temp);
		sizeOfStack--;
		return res;
	}

	//Peek
	int peek() {
		return head -> data;
	}

	//Size
	int size() {
		return sizeOfStack;
	}

	//isEmpty
	bool isEmpty() {
		return (head == NULL);
	}
};

int main () {
	LLStack s;
	s.push(100);
	s.push(230);
	s.push(360);
	s.push(470);
	s.push(8000);
	s.push(500);
	cout<<s.peek()<<endl;
	s.pop();
	cout<<s.peek()<<endl;
	s.pop();
	s.pop();
	s.pop();
	cout<<s.isEmpty()<<endl;
	s.pop();
	s.pop();
	cout<<s.isEmpty()<<endl;
	return 0;
}