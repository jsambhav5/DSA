// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/arrays/fundamentals/linear-search

class Solution {
public:
	int linearSearch(vector<int>& nums, int target) {
		for (int i = 0; i < nums.size(); i++)
			if (nums[i] == target)
				return i;
		return -1;
	}
};