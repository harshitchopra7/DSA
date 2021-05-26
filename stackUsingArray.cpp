#include <iostream>

using namespace std;


//Array Representation
struct MyStack {
	int *arr;
	int cap;
	int top;
	MyStack (int c) {
		cap = c;
		arr = new int[cap];
		top = -1;
	}
	//Push
	void push(int x) {
		top++;
		arr[top] = x;
	}

	//Pop
	int pop() {
		if (top == -1)
			return -1;
		int temp = arr[top];
		top--;
		return temp;
	}
	
	//Peek
	int peek() {
		if (top == -1)
			return -1;
		return arr[top];
	}

	//Size
	int size() {
		return top+1;
	}

	//isEmpty
	bool isEmpty() {
		return (top == -1);
	}
};

int main () {
	MyStack s(5);
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	cout<<s.peek()<<endl;
	s.pop();
	cout<<s.peek()<<endl;
	s.pop();
	s.pop();
	s.pop();
	cout<<s.isEmpty()<<endl;
	s.pop();
	cout<<s.isEmpty()<<endl;
	return 0;
}