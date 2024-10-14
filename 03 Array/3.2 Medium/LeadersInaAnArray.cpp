// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/arrays/faqs-medium/leaders-in-an-array

class Solution {
public:
	vector<int> leaders(vector<int>& nums) {
		vector<int> ans;
		if (nums.empty()) return ans;

		int max = INT_MIN;
		for (int i = nums.size() - 1; i >= 0; i--) {
			if (max < nums[i]) {
				max = nums[i];
				ans.push_back(max);
			}
		}

		reverse(ans.begin(), ans.end());
		return ans;
	}
};