#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> nums;
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(4);

	// {1,2,3,4};
	vector<int>ans;
	int total = 0;

	for (int i=0; i<nums.size(); i++) {
		total += nums[i];
		ans.push_back(total);
	} 

	for (int i=0; i<ans.size(); i++) {
		cout<<ans[i]<<" ";
	}

	return 0;
}