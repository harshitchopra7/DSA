#include <iostream>
#include <math.h>

using namespace std;

// Iterative Factorial
int factorial(int n) {
	int total = 1;
	for (int i=2; i<=n; i++) {
		total = total * i;
	}
	return total;
}
	
// Recursive Factorial
int factorialRecursive(int n) {
	if (n == 0) return 1;
	return n*factorial(n-1);
}

int main() {
	int n;
	cin>>n;
	cout<<factorialRecursive(n);
	return 0;
}