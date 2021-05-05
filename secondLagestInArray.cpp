#include <iostream>
#include <climits>

using namespace std;

int secondLargest(int arr[], int n) {
	int largest = INT_MIN;
	int slargest = -1;
	for (int i=0; i<n; i++) {
		if (arr[i]>largest) {
			slargest = largest;
			largest = arr[i];
		}
		else if (arr[i]>slargest && arr[i] < largest) {
			slargest = arr[i];
		}
	}
	return slargest;
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for (int i=0; i<n; i++) {
		cin>>arr[i];
	}

	cout<<secondLargest(arr, n);

	return 0;
}