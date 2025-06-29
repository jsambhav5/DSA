// LeetCode : 268 - Missing Number (https://leetcode.com/problems/missing-number/description/)
// TUF+ : Find missing number (https://takeuforward.org/plus/data-structures-and-algorithm/arrays/logic-building/find-missing-number)

/*
Topics and Learnings:

Approach:
Used Bitwise XOR to solve this

Complexity Analysis:
TC: O(N)
SC: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int missingNumber(vector<int>& nums) {
		int n = nums.size();
		int xor1 = 0, xor2 = nums[0];
		for (int i = 1; i < n; i++) {
			xor1 ^= i;
			xor2 ^= nums[i];
		}
		xor1 ^= n;
		return xor1 ^ xor2;
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

		int res = sol.missingNumber(arr);

		cout << res << endl;
	}

	return 0;
}

/*
Test Input :
2

5
0 2 3 1 4

6
0 1 2 4 5 6

Test Output : 1
5
3

*/
