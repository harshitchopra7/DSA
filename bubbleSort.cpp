#include <iostream>

using namespace std;

void bubbleSort (int array[], int size) {
	for (int i=0; i<size-1; i++) {
		for (int j=0; j<size-i-1; j++) {
			if (array[j+1] < array[j]) {
				swap(array[j+1], array[j]);
			}
		}
	}
	for (int k=0; k<size; k++) {
		cout<<array[k];
	}
}

int main() {
	int n;
	cout<<"Enter size: \n";
	cin>>n;
	int arr[n];
	cout<<"Enter array elements: \n";
	for (int i=0; i<n; i++) {
		cin>>arr[i];
	}
	bubbleSort(arr, n);
	return 0;
}