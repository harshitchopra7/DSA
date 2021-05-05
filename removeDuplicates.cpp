#include<iostream>

using namespace std;

int removeDuplicates (int arr[], int n) {
	int count=0;
	for (int i=0; i<n; i++) {
		if (arr[i] == arr[i+1]) {
			continue;
		}
		else {
			count++;
		}
	}
	return count;
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for (int i=0; i<n; i++) {
		cin>>arr[i];
	}

	cout<<removeDuplicates(arr, n);

	return 0;
}