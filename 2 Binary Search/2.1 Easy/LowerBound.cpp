// TUF+ : Lower Bound (https://takeuforward.org/plus/data-structures-and-algorithm/binary-search/fundamentals/lower-bound)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int lowerBound(vector<int>& nums, int x) {
		int n = nums.size();
		int low = 0, high = n - 1;
		int mid;
		while (low <= high) {
			mid = (low + high) / 2;

			if (nums[mid] == x)
				return mid;

			else if (nums[mid] > x)
				high = mid - 1;

			else
				low = mid + 1;
		}

		if(nums[mid] < x)
			return mid + 1;
		return mid;
	}
};

int main() {
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

		int ans = sol.lowerBound(arr, x);

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