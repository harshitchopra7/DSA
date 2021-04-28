#include <iostream>

using namespace std;

void sumFirstN (int num) {
	int sum = (num * (num+1)) / 2;
	cout<<sum<<endl;
	return;
}

int main () {
	int n;
	cout<<"Enter no. of natural nos. \n";
	cin>>n;
	sumFirstN(n);
	return 0;
}