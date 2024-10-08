// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/beginner-problems/basic-recursion/sum-of-array-elements

class Solution {
private:
	int sum(vector<int>& nums, int index) {
		if (index >= nums.size())
			return 0;
		return nums[index] + sum(nums, index + 1);
	}
public:
	int arraySum(vector<int>& nums) {
		return sum(nums, 0);
	}
};