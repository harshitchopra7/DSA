#include <iostream>

using namespace std;

int sumOfArray (int arr[], int n) {
	int total=0;
	for (int i=0; i<n; i++) {
		total += arr[i];
	}
	return total;
}

int main() {
	int n;
	cin>>n;

	int arr[n];
	for (int i=0; i<n; i++) {
		cin>>arr[i];
	}

	cout<<sumOfArray(arr, n);
}