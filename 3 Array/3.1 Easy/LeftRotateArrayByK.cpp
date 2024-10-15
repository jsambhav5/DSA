// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/arrays/fundamentals/left-rotate-array

class Solution {
private:
	// void reverseArray(vector<int>& nums, int start, int end) {
	// 	while (start < end) {
	// 		swap(nums[start], nums[end]);
	// 		start++;
	// 		end--;
	// 	}
	// }

public:
	void rotateArray(vector<int>& nums, int k) {
		int n = nums.size();
		k = k % n;
		// reverseArray(nums, 0, k - 1);
		// reverseArray(nums, k, nums.size() - 1);
		// reverseArray(nums, 0, nums.size() - 1);

		reverse(nums.begin(), nums.begin() + k);
		reverse(nums.begin() + k, nums.end());
		reverse(nums.begin(), nums.end());
	}
};