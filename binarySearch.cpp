#include <iostream>

using namespace std;

int binarySearch (int arr[], int size, int key) {
	int start = 1;
	int end = size;
	int mid = (start+end)/2;

	while(start<=end) {
		if (key==arr[mid]) {
			return mid;
		}
		else if (key<arr[mid]) {
			end = mid-1;
		}
		else {
			start = mid+1;
		}
	}
	return -1;
}

int main () {
	int n;
	cout<<"Enter array size \n";
	cin>>n;
	int arr[n];
	cout<<"Enter array elements \n";
	for (int i=0; i<n; i++) {
		cin>>arr[i];
	}

	int key;
	cout<<"Enter key \n";
	cin>>key;
	cout<<binarySearch(arr, n, key);
	return 0;
}