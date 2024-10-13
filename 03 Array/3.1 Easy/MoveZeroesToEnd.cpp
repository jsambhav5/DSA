// LeetCode : 283
// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/arrays/logic-building/move-zeros-to-end

class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		int n = nums.size();
		int nonZero = 0;
		for (int i = 0; i < n; i++)
			if (nums[i] != 0) {
				swap(nums[i], nums[nonZero]);
				nonZero++;
			}
	}
};