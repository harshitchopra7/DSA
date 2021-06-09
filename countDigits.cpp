#include <iostream>
#include <math.h>

using namespace std;

// Time Complexity - O(N)
int countDigit(int n) {
	int count = 0;
	while(n>0) {
		n = n/10;
		count++;
	}
	return count;
}
int countDigitOptimised(int n) {
	int temp = log10(n) + 1;
	return temp;
}

int main() {
	int n;
	cin>>n;
	cout<<countDigit(n);
	// cout<<countDigitOptimised(n);
	return 0;
}