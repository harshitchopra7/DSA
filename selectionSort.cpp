#include <iostream>

using namespace std;

void selectionSort (int arr[], int size) {
	for (int i=0; i<size-1; i++) {
		for (int j=i+1; j<size; j++) {
			if (arr[j]<arr[i]) {
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	for (int i=0; i<size; i++) {
		cout<<arr[i]<<" ";
	}
	return;
}

int main() {
	int n;
	cout<<"Enter size of array: \n";
	cin>>n;
	int arr[n];
	cout<<"Enter "<<n<<" array elements: \n";
	for (int i=0; i<n; i++) {
		cin>>arr[i];
	}

	selectionSort(arr, n);

	return 0;
}