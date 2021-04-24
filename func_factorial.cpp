#include <iostream>

using namespace std;

void factorial(int num) {
	int fact=1;
	for(int i=2; i<=num; i++) {
		fact*=i;
	}
	cout<<fact<<endl;
	return;
}

int main() {
	int n;
	cout<<"Enter a no. \n";
	cin>>n;

	factorial(n);

	return 0;
}