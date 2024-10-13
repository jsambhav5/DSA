// LeetCode : 169
// TUF+ ; https://takeuforward.org/plus/data-structures-and-algorithm/arrays/faqs-hard/majority-element-i
// Moore's Voting Algorithm

class Solution {
public:
	int majorityElement(vector<int>& nums) {
		int count = 0, candidate;
		for (int i : nums) {
			if (count == 0)
				candidate = i;
			if (i == candidate)
				count++;
			else
				count--;
		}
		return candidate;
	}
};