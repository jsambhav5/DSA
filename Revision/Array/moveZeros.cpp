class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		int n = nums.size();
		int nonZero = 0;
		for (int i = 1; i < n; i++) {
			if (nums[nonZero] != 0) nonZero++;
			if (nonZero != i && nums[i] != 0) {
				swap(nums[nonZero++], nums[i]);
			}
		}
	}
};
