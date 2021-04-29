// Implementation of Queue using Array

#include <iostream>

using namespace std;

class Queue {

	private:
		int rear, front;
		int arr[5];

	public:
		Queue() {
			int rear = -1;
			int front = -1;
			for (int i=0; i<5; i++) {
				arr[i] = 0;
			}
		}

		bool isEmpty() {
			if ((rear == -1) && (front == -1)) {
				return true;
			}
			else {
				return false;
			}
		}

		bool isFull() {
			if (rear == 4) {
				return true;
			}
			else {
				return false;
			} 
		}

		void enqueue(int value) {
			if (isFull()) {
				cout<<"Queue is full \n";
				return;
			}
			else if (isEmpty()) {
				rear = 0;
				front = 0;
				arr[rear] = value;
			}
			else {
				rear++;
				arr[rear] = value;
			}	
		}

		int dequeue() {
			int temp;
			if (isEmpty()) {
				cout<<"Queue is empty \n";
				return 0;
			}
			else if (front == rear) {
				temp = arr[front];
				arr[front] = 0;
				front = -1;
				rear = -1;
			}
			else {
				temp = arr[front];
				arr[front] = 0;
				front++;
			}
			return temp;
 		}

 		int count() {
 			return (rear-front+1);
 		}

 		void display() {
 			for(int i=0; i<5;i++) {
 				cout<<arr[i]<<" ";
 			}
 			cout<<endl;
 		}

};

int main() {
	
	Queue q1;

	int option, val;

	do {
		cout<<"Select operation to be performed. Enter 0 to exit. \n";
		cout<<"1. Enqueue() \n";
		cout<<"2. Dequeue() \n";
		cout<<"3. isEmpty() \n";
		cout<<"4. isFull() \n";
		cout<<"5. Count() \n";
		cout<<"6. Display \n";
		cout<<"7. Clear Screen \n";

		cin>>option;

		switch(option) {
			case 0:
				break;
			case 1:
				cout<<"Value to be entered: \n";
				cin>>val;
				q1.enqueue(val);
				break;
			case 2:
				q1.dequeue();
				break;
			case 3:
				if(q1.isEmpty())
				{
					cout<<"Queue is empty \n";
				}
				else {
					cout<<"Queue is not empty \n";
				}
				break;
			case 4:
				if(q1.isFull())
				{
					cout<<"Queue is full \n";
				}
				else {
					cout<<"Queue is not full \n";
				}
				break;
			case 5:
				cout<<"Total no. of elements are: "<<q1.count()<<endl;
				break;
			case 6:
				q1.display();
				break;
			case 7:
				system("cls");
				break;
		}

	}while(option != 0);

	return 0;
}