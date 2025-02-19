// LeetCode : 35 - Search Insert Position (https://leetcode.com/problems/search-insert-position/)
// TUF+ : Search Insert Position (https://takeuforward.org/plus/data-structures-and-algorithm/binary-search/logic-building/search-insert-position)

// Same as "Lower Bound"

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		int ans = nums.size();
		int low = 0, high = ans - 1;

		while (low <= high) {
			int mid = (low + high) / 2;

			if (nums[mid] >= target) {
				ans = mid;
				high = mid - 1;
			}

			else low = mid + 1;
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

		int target;
		cin >> target;

		Solution sol;

		int ans = sol.searchInsert(arr, target);

		cout << ans << endl;
	}

	return 0;
}

/*
Test Input :
5

6
-1 0 3 5 9 12
9

6
-1 0 3 5 9 12
2

4
1 2 2 3
2

5
3 5 8 15 19
9

5
3 5 8 15 19
3

Test Output : 1
4
2
1
3
0

*/
