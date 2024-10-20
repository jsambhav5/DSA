// LeetCode : 128
// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/hashing/faqs/longest-consecutive-sequence-in-an-array

#include <bits/stdc++.h>
using namespace std;

class Solution {

public:
	int longestConsecutive(vector<int>& nums) {
		if (nums.size() == 0) {
			return 0;
		}
		int n = nums.size();

		set<int> mem;
		int count = 1;
		int longest = 1;

		for (int i = 0; i < n; i++)
			mem.insert(nums[i]);

		for (int i : mem) {
			if (mem.find(i - 1) != mem.end())
				count++;
			else {
				longest = max(longest, count);
				count = 1;
			}
		}

		longest = max(longest, count);
		return longest;
	}
};

int main() {
	int n;
	cin >> n;

	vector<int> a;

	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		a.push_back(input);
	}

	Solution solution;

	int ans = solution.longestConsecutive(a);
	cout << ans;
	return 0;
}
