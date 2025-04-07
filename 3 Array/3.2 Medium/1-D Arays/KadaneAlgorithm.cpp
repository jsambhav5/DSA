// LeetCode : 53 - Maximum Subarray (https://leetcode.com/problems/maximum-subarray/description/)
// TUF+ : Kadane's Algorithm (https://takeuforward.org/plus/dsa/arrays/faqs-medium/kadane's-algorithm)

/*
Topics and Learnings:

Approach:
Using Kadane's Algorith =>
	Don't include Subarrays with negative sum

Complexity Analysis:
TC: O(N)
SC: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

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

int main(int argc, const char** argv) {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		vector<int> arr;

		for (int i = 0; i < n; i++) {
			int input;
			cin >> input;
			arr.push_back(input);
		}

		Solution sol;

		int res = sol.maxSubArray(arr);
		cout << res << endl;
	}

	return 0;
}

/*
Test Input :
3

9
-2 1 -3 4 -1 2 1 -5 4

1
1

5
5 4 -1 7 8

Test Output : 1
6
1
23

*/
