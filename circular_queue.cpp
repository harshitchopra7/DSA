// Implementation of circular queue using array
// Some line of code are changed to convert from queue to circular queue

#include <iostream>

using namespace std;

class Cqueue {
	private:
		int rear, front;
		int arr[5];
		int item_count;
	public:
		Cqueue() {
			rear = -1;
			front = -1;
			item_count=0;
			int arr[5];
			for (int i=0; i<5; i++) {
				arr[i]=0;
			}
		}

// isEmpty()
		bool isEmpty() {
			if ((rear == -1) && (front == -1)) {
				return true;
			}
			else {
				return false;
			}
		}

// isFull()
		bool isFull() {
			if ((rear+1)%5 == front) {
				return true;
			}
			else {
				return false;
			}
		}

// enqueue()
		void enqueue(int value) {
			if (isFull()) {
				cout<<"Queue is full. \n";
				return;
			}
			else if(isEmpty()) {
				rear = 0;
				front = 0;	
				arr[rear] = value;
				item_count++;
			}
			else {
				rear = (rear+1) % 5;
				arr[rear] = value;
				item_count++;
			}
		}

// dequeue()
		int dequeue() {
			int temp;
			if (isEmpty()) {
				cout<<"Queue is empty. \n";
				return 0;
			}
			else if(rear == front) {
				temp = arr[front]; 
				rear = -1;
				front = -1;
				arr[front] = 0;
				item_count--;
			}
			else {
				temp = arr[front];
				front = (front+1)%5;
				arr[front]=0;
				item_count--;
			}
			return temp;
		}

// count()
		int count() {
			return (item_count);
		}

// display()
		void display() {
			for (int i=0; i<5; i++) {
				cout<<arr[i]<<" ";
			} 
		}


};

int main() {

	Cqueue q1;

	int val, option;

	do{
		cout<<"Enter what operation do you want to perform. Press 0 to exit. \n";
		cout<<"1. enqueue() \n";
		cout<<"2. dequeue() \n";
		cout<<"3. isEmpty() \n";
		cout<<"4. isFull() \n";
		cout<<"5. count() \n";
		cout<<"6. display() \n";
		cout<<"7. Clear Screen \n";

		cin>>option;

		switch(option) {
			case 0:
			    break;

			case 1:
				cout<<"Enter value to be enqueued: \n";
				cin>>val;
				q1.enqueue(val);
				cout<<"Enqueued. \n";
				break;

			case 2:
				q1.dequeue();
				cout<<"Dequeued. \n";
				break;

			case 3:
				if(q1.isFull()) {
					cout<<"Queue is full. \n";
				}
				else {
					cout<<"Queue is not full. \n";
				}
				break;

			case 4:
				if(q1.isEmpty()) {
					cout<<"Queue is empty. \n";
				}
				else {
					cout<<"Queue is not empty. \n"
				}
				break;

			case 5:
				cout<<"Total no. of elements in queue are: "<<q1.count()<<endl;
				break;

			case 6:
				cout<<"Elements entered are: "<<q1.display()<<endl;
				break;

			case 7:
				system("cls");
				break;

		}

	}while(option != 0);


	return 0;
}