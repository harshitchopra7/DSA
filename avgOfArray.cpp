#include <iostream>

using namespace std;

float avgOfArray (int arr[], int n) {
	float total=0;
	for (int i=0; i<n; i++) {
		total += arr[i];
	}
	return total/n;
}

int main() {
	int n;
	cin>>n;

	int arr[n];
	for (int i=0; i<n; i++) {
		cin>>arr[i];
	}

	cout<<avgOfArray(arr, n);
}