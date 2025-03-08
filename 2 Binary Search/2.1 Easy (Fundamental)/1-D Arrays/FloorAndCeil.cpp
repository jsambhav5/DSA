// TUF+ : Floor and Ceil in Sorted Array (https://takeuforward.org/plus/data-structures-and-algorithm/binary-search/logic-building/floor-and-ceil-in-sorted-array)

/*
Approach:
Used Binary Search to solve this

Complexiy Analysis:
TC: O(logN)
SC: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
	int findFloor(vector<int> nums, int x) {
		int low = 0;
		int high = nums.size() - 1;
		int ans = -1;
		while (low <= high) {
			int mid = (low + high) / 2;
			int ele = nums[mid];

			if (ele == x) return ele;
			if (ele < x) {
				ans = ele;
				low = mid + 1;
			}
			else high = mid - 1;
		}
		return ans;
	}

	int findCeil(vector<int> nums, int x) {
		int low = 0;
		int high = nums.size() - 1;
		int ans = -1;
		while (low <= high) {
			int mid = (low + high) / 2;
			int ele = nums[mid];

			if (ele == x) return ele;
			if (ele > x) {
				ans = ele;
				high = mid - 1;
			}
			else low = mid + 1;
		}
		return ans;
	}

public:
	vector<int> getFloorAndCeil(vector<int> nums, int x) {
		int floor = findFloor(nums, x);
		int ceil = findCeil(nums, x);
		return { floor, ceil };
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

		int x;
		cin >> x;

		Solution sol;

		vector<int> ans = sol.getFloorAndCeil(arr, x);

		for (auto i : ans) {
			cout << i << " ";
		}

		cout << endl;
	}

	return 0;
}

/*
Test Input :
3

6
3 4 4 7 8 10
5

6
3 4 4 7 8 10
8

6
3 4 4 7 8 10
12

Test Output : 1
4 7
8 8
10 -1

*/
