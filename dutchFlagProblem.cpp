#include <iostream> 

using namespace std;

void arrange(int array[], int size) {
	int j=0;
	for (int i=0; i<size; i++) {
		if(array[i]<0) {
			if(i != j) {
				swap(array[i], array[j]);
			}
			j++;
		}
	}
	for(int i=0; i<size; i++) {
		cout<<array[i]<<" ";
	}
}

int main() {
	int n;
	cout<<"Size: \n";
	cin>>n;

	int arr[n];
	cout<<"Array ele 0, 1 and 2 only: \n";

	for (int i=0; i<n; i++) {
		cin>>arr[i];
	}

	cout<<"Sorted array: \n";
	arrange(arr, n);

	return 0;
}
