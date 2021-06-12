#include <iostream>
using namespace std;

struct myQueue{
	int *arr;
	int cap, size, front;

	myQueue(int c){
		cap = c;
		size = 0;
		front = 0;
		arr = new int [c];
	}
	bool isFull(){
		return (size == cap);
	}
	bool isEmpty(){
		return (size == 0);
	}
	int getFront(){
		if(isEmpty())
			return -1;
		else 
			return front;
	}
	int getRear(){
		if(isEmpty())
			return -1;
		else
			return (front + size -1)%cap;
	}
	int enqueue(int x){
		if(isFull()){
			return -1;
		}
		int rear = getRear();
		rear = (rear+1)%cap;
		arr[rear]=x;
		size++;
		return x;
	}
	void deque(){
		if(isEmpty()){
			return ;
		
			front = (front+1)%cap;
			size--;
		}
	}
};
int main()
{	

	myQueue q(5);
	cout<<q.enqueue(10)<<" ";
	cout<<q.enqueue(20)<<" ";
	cout<<q.enqueue(30)<<" ";
	q.deque();
	cout<<"Front: "<<q.getFront()<<" ";
	cout<<"Rear: "<<q.getRear()<<" ";
	cout<<q.isEmpty()<<" ";
	cout<<q.isFull();
	return 0;
}