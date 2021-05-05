#include <iostream>

using namespace std;

int factorial(int num) {
	int fact=1;
	for(int i=2; i<=num; i++) {
		fact*=i;
	}
	return fact;
} 

int main() {
	int n,r;
	cout<<"Enter value of n and r \n";
	cin>>n>>r;
	int ncrAns = factorial(n) / (factorial(n-r) * factorial(r));
	cout<<ncrAns<<endl;;
	return 0;
}