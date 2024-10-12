// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/sorting/algorithms/insertion-sorting

class Solution {
public:
	vector<int> insertionSort(vector<int>& nums) {
		for (int i = 0; i < nums.size() - 1; i++)
			for (int j = i + 1; j > 0; j--)
				if (nums[j] < nums[j - 1])
					swap(nums[j], nums[j - 1]);
				else break;
		return nums;
	}
};