// LeetCode 268
// TUF+ ; https://takeuforward.org/plus/data-structures-and-algorithm/arrays/logic-building/find-missing-number

class Solution {
public:
	int missingNumber(vector<int>& nums) {
		int sum = 0;
		int n = nums.size();
		for (int i = 0; i < n; i++) {
			sum += nums[i];
		}
		return ((n * (n + 1)) / 2) - sum;
	}
};