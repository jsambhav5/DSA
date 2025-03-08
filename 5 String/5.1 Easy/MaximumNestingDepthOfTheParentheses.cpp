// LeetCode : 1614 - Maximum Nesting Depth of the Parentheses (https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/description/)

/*
Approach:
Used Linear Traversal to solve this

Complexiy Analysis:
TC: O(N)
SC: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int maxDepth(string s) {
		int maxDepth = 0;
		int count = 0;

		for (auto ch : s) {
			if (ch == '(') {
				count++;
				maxDepth = max(maxDepth, count);
			}
			else if (ch == ')') {
				count--;
			}
		}

		return maxDepth;
	}
};

int main(int argc, const char** argv) {
	int t;
	cin >> t;

	while (t--) {
		string s;
		cin >> s;

		Solution sol;
		int res = sol.maxDepth(s);

		cout << res << endl;
	}

	return 0;
}

/*
Test Input :
3
(1+(2*3)+((8)/4))+1
(1)+((2))+(((3)))
()(())((()()))

Test Output : 1
3
3
3

*/
