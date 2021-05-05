#include <iostream>

using namespace std;

bool isSorted (int arr[], int n) {
	if (n==1) {
		return true;
	}
	for (int i=0; i<n-1; i++) {
		if (arr[i+1]<arr[i]) {
			return false;
		}
	}
	return true;

}

int main() {
	int n;
	cin>>n;

	int arr[n];

	for (int i=0; i<n; i++) {
		cin>>arr[i];
	}

	if(isSorted(arr, n)) {
		cout<<"Array is sorted \n";
	}
	else {
		cout<<"Array is not sorted \n";
	}
}