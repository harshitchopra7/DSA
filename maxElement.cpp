#include <iostream>

using namespace std;

int maxElement (int arr[], int n) {
	int max=0;
	for (int i=0; i<n; i++) {
		if (arr[i]>max) {
			max=arr[i];
		}
	}
	return max;
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for (int i=0; i<n; i++) {
		cin>>arr[i];
	}
	cout<<"Max Elements is: \n"<<maxElement(arr, n);
	return 0;
}