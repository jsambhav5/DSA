// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/arrays/fundamentals/largest-element

class Solution {
public:
	int largestElement(vector<int>& nums) {
		int ans = nums[0];
		for (int i = 1; i < nums.size(); i++)
			ans = max(ans, nums[i]);
		return ans;
	}
};