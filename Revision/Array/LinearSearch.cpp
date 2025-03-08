// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/arrays/fundamentals/linear-search

/*
Approach:
Linear Search

Complexiy Analysis:
TC: O(N)
SC: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int linearSearch(vector<int>& nums, int target) {
		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] == target)
				return i;
		}
		return -1;
	}
};

int main(int argc, const char** argv) {
	int t;
	cin >> t;

	while (t--) {
		int n, target;
		cin >> n;

		vector<int> arr;

		for (int i = 0; i < n; i++) {
			int input;
			cin >> input;
			arr.push_back(input);
		}

		cin >> target;

		Solution sol;

		int res = sol.linearSearch(arr, target);
		cout << res << endl;
	}

	return 0;
}

/*
Test Input :
2

5
7 4 1 5 3
4

5
5 4 4 1 1
3

Test Output : 1
1
-1

*/
