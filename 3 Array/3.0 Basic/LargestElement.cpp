// TUF+ : Largest Element (https://takeuforward.org/plus/data-structures-and-algorithm/arrays/fundamentals/largest-element)

/*
Topics and Learnings:

Approach:
Used Linear Search to solve this

Complexity Analysis:
TC: O(N)
SC: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int largestElement(vector<int>& nums) {
		int ans = nums[0];
		for (int i = 1; i < nums.size(); i++)
			ans = max(ans, nums[i]);
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

		int res = sol.largestElement(arr);
		cout << res << endl;
	}

	return 0;
}

/*
Test Input :
3

5
0 2 43 0 5

5
1 2 0 4 0

3
0 2 3

Test Output : 1
43
4
3
*/
