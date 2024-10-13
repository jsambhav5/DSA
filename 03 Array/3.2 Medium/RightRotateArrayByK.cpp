// LeetCode : 189

#include<bits/stdc++.h>
using namespace std;

class Solution {
	// private:
	//     void reverse(vector<int> &nums, int start, int end) {
	//         while(start < end) {
	//             swap(nums[start], nums[end]);
	//             start++;
	//             end--;
	//         }
	//     }

public:
	void rotate(vector<int>& nums, int k) {
		int n = nums.size();
		k = k % n;
		reverse(nums.begin(), nums.begin() + n - k);
		reverse(nums.begin() + n - k, nums.end());
		reverse(nums.begin(), nums.end());

		// reverse(nums, 0, n - k - 1);
		// reverse(nums, n - k, n - 1);
		// reverse(nums, 0, n - 1);

		// for(int i = 0; i < n; i++) {
		//     nums.push_back(nums[i]);
		//     nums[i] = nums[i - k + n];
		// }
		// nums.erase(nums.begin() + n, nums.end());
	}
};