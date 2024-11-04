// LeetCode : 53
// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/arrays/faqs-medium/kadane's-algorithm


// Using Kadane's Algorith:
//     Don't include Subarrays with negative sum
class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		int ans = INT_MIN, sum = 0;
		for (int i = 0; i < nums.size(); i++) {
			sum += nums[i];
			ans = max(ans, sum);
			if (sum < 0) sum = 0;
		}
		return ans;
	}
};