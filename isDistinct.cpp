#include <iostream>

using namespace std;

int distinctElements (int arr[], int n) {
	int count=0;
	bool isDistinct = true;
	for (int i=0; i<n; i++) {
		isDistinct = true;
		for (int j=i-1; j>=0; j--) {
			if(arr[i]==arr[j]) {
				isDistinct = false;
				break;
			}
		}
		if(isDistinct == true) {
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

	cout<<distinctElements(arr, n);
}