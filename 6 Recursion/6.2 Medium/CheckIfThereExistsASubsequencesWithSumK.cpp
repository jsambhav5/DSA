// TUF+ : Check if there exists a subsequences with sum K (https://takeuforward.org/plus/dsa/recursion/subsequence-pattern-problems/check-if-there-exists-a-subsequence-with-sum-k)

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
	bool func(int ind, int sum, std::vector<int>& nums) {
		if (ind == nums.size())
			return sum == 0;
		return func(ind + 1, sum - nums[ind], nums) | func(ind + 1, sum, nums);
	}

public:
	bool checkSubsequenceSum(std::vector<int>& nums, int target) {
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
		bool res = sol.checkSubsequenceSum(arr, target);

		cout << res << endl;
	}

	return 0;
}

/*
Test Input :
3

5 8
1 2 3 4 5

4 10
4 3 9 2

4 16
1 10 4 5

Test Output : 1
1
0
1

*/
