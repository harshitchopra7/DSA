#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] != nums[i+1]) {
                count++;
                cout<<"hello";
            }
        }
        return count;
    }
};

int main() {
    vector<int> nums;
    int n;
    cin>>n;

    for (int i=0; i<n; i++) {
        nums.push_back(i);
    }

    Solution s;

    cout<<s.removeDuplicates(nums);
}