#include <iostream>
#include <vector>

using namespace std;

//Vector Representation
struct VStack {
	vector<int> v;
	void push(int x) {
		v.push_back(x);
	}
	int pop() {
		int temp = v.back();
		v.pop_back();
		return temp;
	}
	int peek() {
		return v.back();
	}
	int size() {
		return v.size();
	}
	bool isEmpty() {
		return v.empty();
	}
};

int main () {
	VStack s;
	s.push(100);
	s.push(200);
	s.push(300);
	s.push(400);
	s.push(500);
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