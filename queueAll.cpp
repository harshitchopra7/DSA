#include <iostream>

using namespace std;

//Struct Using Array
struct myQueue {
	int *arr;
	int cap;
	int front;
	int rear;
	myQueue(int c) {
		cap = c;
		arr = new int[cap];
		front = -1;
		rear = -1;
	}

	//Enqueue
	void enqueue(int x) {
		if (rear == cap-1) {
			cout<<"Queue is Full \n";
			return;
		}
		else if (front == -1 && rear == -1) {
			front++;
			rear++;
			arr[rear] = x;
		}
		else {
			rear++;
			arr[rear] = x;
		}
	}

	//Dequeue
	int dequeue() {
		if (front == -1 && rear == -1) {
			return -1;
		}
		else if (front == 0 && rear == 0) {
			int temp = arr[front];
			front--;
			rear--;
			return temp;
		}
		else if (front == rear && front != -1 && front != 0) {
			int temp = arr[front];
			front = -1;
			rear = -1;
			return temp;
		}
		else {
			int temp = arr[front];
			front++;
			return temp;
		}
	}

	//getFront
	int getFront() {
		if (front == -1) 
			return -1;
		return arr[front];
	}

	//getRear
	int getRear() {
		if (rear == -1) 
			return -1;
		return arr[rear];
	}

	//size
	int size() {
		return rear-front+1;
	}

	//isFull
	bool isFull() {
		return (rear == cap);
	}

	//isEmpty
	bool isEmpty() {
		return (front == -1 && rear == -1);
	}

	//Print
	void print() {
		for (int i=0; i<5; i++) {
			cout<<arr[i]<<" ";
		}
	}
};

int main () {
	myQueue q(5);

	q.enqueue(1);
	cout<<"Size: "<<q.size()<<endl;
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(2);
	q.enqueue(3);

	q.print();

	cout<<endl;
	cout<<"Front: "<<q.getFront()<<endl;
	cout<<"Rear: "<<q.getRear()<<endl;
	cout<<"Size: "<<q.size()<<endl;
	cout<<"Empty: "<<q.isEmpty()<<endl;
	cout<<"Full: "<<q.isFull()<<endl;
	cout<<endl;
	q.dequeue();

	cout<<"Front: "<<q.getFront()<<endl;
	cout<<"Rear: "<<q.getRear()<<endl;
	cout<<"Size: "<<q.size()<<endl;
	cout<<"Empty: "<<q.isEmpty()<<endl;
	cout<<"Full: "<<q.isFull()<<endl;
	cout<<endl;
	q.dequeue();
	q.dequeue();
	cout<<endl;
	cout<<"Front: "<<q.getFront()<<endl;
	cout<<"Rear: "<<q.getRear()<<endl;
	cout<<"Size: "<<q.size()<<endl;
	cout<<"Empty: "<<q.isEmpty()<<endl;
	cout<<"Full: "<<q.isFull()<<endl;

	return 0;
}
