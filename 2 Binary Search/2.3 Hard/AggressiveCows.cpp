// TUF+ : Aggressive Cows (https://takeuforward.org/plus/dsa/binary-search/faqs/aggressive-cows)

/*
Topics and Learnings: Binary Search

Approach:
Used Binary Search to solve this

Complexiy Analysis:
TC: O(NlogN) + O(N *log(max-min))
SC: O(NlogN)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
	bool canWePlace(vector<int>& nums, int dist, int cows) {
		int n = nums.size();
		int cntCows = 1;
		int last = nums[0];

		for (int i = 1; i < n; i++) {
			if (nums[i] - last >= dist) {
				cntCows++;
				last = nums[i];
			}
			if (cntCows >= cows) return true;
		}
		return false;
	}

public:
	int aggressiveCows(vector<int>& nums, int k) {
		int n = nums.size();
		sort(nums.begin(), nums.end());
		int low = 1, high = nums[n - 1] - nums[0];

		while (low <= high) {
			int mid = (low + high) / 2;
			if (canWePlace(nums, mid, k) == true) {
				low = mid + 1;
			}
			else high = mid - 1;
		}
		return high;
	}
};

int main(int argc, const char** argv) {
	int t;
	cin >> t;

	while (t--) {
		int n, k;
		cin >> n >> k;

		vector<int> arr;

		for (int i = 0; i < n; i++) {
			int input;
			cin >> input;
			arr.push_back(input);
		}

		Solution sol;

		int res = sol.aggressiveCows(arr, k);
		cout << res << endl;
	}

	return 0;
}

/*
Test Input :
3

6 4
0 3 4 7 10 9

5 2
4 2 1 3 6

5 3
10 1 2 7 5

Test Output : 1
3
5
4

*/
