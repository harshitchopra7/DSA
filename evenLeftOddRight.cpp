#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    vector<int> v;
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int s=0;
    int s2=1;
    while(s2<n-1) {
        if (arr[s2] % 2 == 0) {            
            swap(arr[s], arr[s2]);
            s++;
            s2++;
        }
        else {
            s2++;
        }
    }

    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}