#include <iostream>

using namespace std;

void selectionSort(int array[], int size) {
	for (int i=0; i<size-1; i++) {
		int min=i;
		for (int j=i+1; j<size; j++) {
			if (array[j]<array[min]) {
				min = j;
			}
		}
		if (min !=i ) {
			swap(array[i], array[min]);
		}
	}
	for (int k=0; k<size; k++) {
		cout<<array[k]<<" ";
	}
	cout<<endl;
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
	selectionSort(arr, n);
	return 0;
}