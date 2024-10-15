// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/arrays/fundamentals/second-largest-element

class Solution {
public:
	int secondLargestElement(vector<int>& nums) {
		if (nums.size() < 2) return -1;
		int maxEle = nums[0], secondMaxEle = INT_MIN, flag = 0;
		for (int i : nums) {
			if (i > maxEle) {
				secondMaxEle = maxEle;
				maxEle = i;
				flag = 1;
			}
			else if (i > secondMaxEle && i != maxEle) {
				secondMaxEle = i;
				flag = 1;
			}
		}
		if (flag == 0) return -1;
		return secondMaxEle;
	}
};