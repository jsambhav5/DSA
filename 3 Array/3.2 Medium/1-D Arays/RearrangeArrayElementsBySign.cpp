// LeetCode : 2149
// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/arrays/faqs-medium/rearrange-array-elements-by-sign

class Solution {
public:
	vector<int> rearrangeArray(vector<int>& nums) {
		int n = nums.size();
		vector<int> res(n, 0);

		int pos = 0, neg = 1;
		for (int i = 0; i < n; i++) {
			if (nums[i] > 0) {
				res[pos] = nums[i];
				pos += 2;
			}
			else {
				res[neg] = nums[i];
				neg += 2;
			}
		}
		return res;
	}
};