// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/beginner-problems/basic-recursion/check-if-the-array-is-sorted

class Solution {
private:
	bool checkSortedArray(vector<int>& nums, int i) {
		if (i >= nums.size() - 1) return true;
		if (nums[i] > nums[i + 1]) return false;
		return checkSortedArray(nums, i + 1);
	}
public:
	bool isSorted(vector<int>& nums) {
		return checkSortedArray(nums, 0);
	}
};