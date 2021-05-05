#include <iostream>

using namespace std;

void printNto1Recursion(int n) {
	if (n==0) 
		return;
	cout<<n<<" ";
	printNto1Recursion(n-1);
}

int main () {
	int n;
	cin>>n;
	printNto1Recursion(n);
	return 0;
}