// LeetCode : 136 - Single Number (https://leetcode.com/problems/single-number/description/)
// TUF+ : Single Number - I ( https://takeuforward.org/plus/dsa/bit-manipulation/problems/single-number---i )

/*
Topics and Learnings:

Approach:
Used XOR bitwise operation to solve this

Complexity Analysis:
TC: O(N)
SC: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int res = 0;
		for (int i : nums) {
			res ^= i;
		}
		return res;
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

		int res = sol.singleNumber(arr);

		cout << res << endl;
	}

	return 0;
}

/*
Test Input :
3

3
2 2 1

5
4 1 2 1 2

1
1

Test Output : 1
OUTPUT
1
4
1

*/
