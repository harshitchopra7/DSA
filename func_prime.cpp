#include <iostream>

using namespace std;

bool isPrime(int x) {
	for (int i=2; i<x; i++) {
		if (x%2==0) {
			return false;
		}
	}
	return true;
}

int main () {
	int a,b;
	cout<<"Enter two nos. \n";
	cin>>a>>b;
	for(int i=a; i<=b; i++) {
		if(isPrime(i)) {
			cout<<i<<endl;
		}
	}
}

