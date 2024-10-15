// LeetCode 75
// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/arrays/faqs-medium/sort-an-array-of-0's-1's-and-2's

class Solution {
public:
	void sortColors(vector<int>& nums) {
		int low = 0, mid = 0, high = nums.size() - 1;
		while (mid <= high) {
			if (nums[mid] == 0) {
				swap(nums[low], nums[mid]);
				low++;
				mid++;
			}
			else if (nums[mid] == 1) {
				mid++;
			}
			else {
				swap(nums[high], nums[mid]);
				high--;
			}
		}
	}
};