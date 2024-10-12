// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/sorting/algorithms/bubble-sort

class Solution {
public:
	vector<int> bubbleSort(vector<int>& nums) {
		for (int i = nums.size() - 1; i > 0; i--) {
			bool didSwap = false;
			for (int j = 0; j < i; j++)
				if (nums[j] > nums[j + 1]) {
					swap(nums[j], nums[j + 1]);
					didSwap = true;
				}
			if (didSwap) break;
		}
		return nums;
	}
};