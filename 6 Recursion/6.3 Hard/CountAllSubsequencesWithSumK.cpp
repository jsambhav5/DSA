// TUF+ : Count all subsequences with sum K (https://takeuforward.org/plus/dsa/recursion/subsequence-pattern-problems/count-all-subsequences-with-sum-k)

/*
Topics and Learnings: Recursion

Approach:
Used Recursion to solve this

Complexity Analysis:
TC: O(2^N)
SC: O(N)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
	int func(int ind, int sum, vector<int>& nums) {
		if (sum == 0) return 1;
		if (sum < 0 || ind == nums.size()) return 0;
		return func(ind + 1, sum - nums[ind], nums) + func(ind + 1, sum, nums);
	}

public:
	int countSubsequenceWithTargetSum(vector<int>& nums, int target) {
		return func(0, target, nums);
	}
};

int main(int argc, const char** argv) {
	int t;
	cin >> t;

	while (t--) {
		int n, target;
		cin >> n >> target;

		vector<int> arr;

		for (int i = 0; i < n; i++) {
			int input;
			cin >> input;
			arr.push_back(input);
		}

		Solution sol;
		int res = sol.countSubsequenceWithTargetSum(arr, target);

		cout << res << endl;
	}

	return 0;
}

/*
Test Input :
3

5 10
4 9 2 5 1

6 5
4 2 10 5 1 3

4 16
1 10 4 5

Test Output : 1
2
3
1

*/
