// LeetCode 268

class Solution {
public:
	int missingNumber(vector<int>& nums) {
		int n = nums.size();
		int xor_ = 0;
		for (int i = 0; i < n; i++) {
			xor_ = xor_ ^ nums[i] ^ i;
		}
		return xor_ ^ n;
	}
};