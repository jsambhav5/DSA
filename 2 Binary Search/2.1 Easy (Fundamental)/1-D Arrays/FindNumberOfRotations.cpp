// TUF+ : Find out how many times the array is rotated (https://takeuforward.org/plus/data-structures-and-algorithm/binary-search/logic-building/find-out-how-many-times-the-array-is-rotated)

/*
Topics and Learnings:

Approach:
same as minimum in rotated sorted array
return index of minimum instead of minimum  number itself
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int findKRotation(vector<int>& nums) {
		int n = nums.size();
		int low = 0, high = n - 1;
		int mini = INT_MAX;
		int ans = -1;

		while (low <= high) {
			int mid = (low + high) / 2;

			if (nums[low] <= nums[mid]) {
				if (nums[low] < mini) {
					mini = nums[low];
					ans = low;
				}
				low = mid + 1;
			}
			else {
				if (nums[mid] < mini) {
					mini = nums[mid];
					ans = mid;
				}
				high = mid - 1;
			}
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

		int ans = sol.findKRotation(arr);

		cout << ans << endl;
	}

	return 0;
}

/*
Test Input :
3

8
4 5 6 7 0 1 2 3

5
3 4 5 1 2

4
4 5 1 2

Test Output : 1
4
3
2

*/
