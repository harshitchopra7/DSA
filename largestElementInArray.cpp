#include <iostream>
#include <climits>

using namespace std;

int largestElement(int arr[], int n) {
	int max = INT_MIN;
	for (int i=0; i<n; i++) {
		if (max<arr[i]) {
			max=i;
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

	cout<<"Max at: "<<largestElement(arr, n);
	return 0;
}