#include <iostream>

using namespace std;

int natural(int n) {
	if (n==0) 
		return 0;
	return n+natural(n-1);
}

int main() {
	int n;
	cin>>n;
	cout<<natural(n);
	return 0;
}