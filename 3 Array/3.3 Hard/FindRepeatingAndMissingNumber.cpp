// TUF+ : Find the repeating and missing number (https://takeuforward.org/plus/dsa/arrays/faqs-hard/find-the-repeating-and-missing-number)

/*
Topics and Learnings: Array, Bit-Manipulation

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
	vector<int> findMissingRepeatingNumbers(vector<int> nums) {
		int n = nums.size();
		int xr = 0;

		for (int i = 0; i < n; i++) {
			xr ^= i + 1;
			xr ^= nums[i];
		}

		int shift = (xr & ~(xr - 1));

		int zero = 0, one = 0;

		for (int i = 0; i < n; i++) {
			if (nums[i] & shift)
				one ^= nums[i];
			else zero ^= nums[i];
		}

		for (int i = 1; i <= n; i++) {
			if (i & shift)
				one ^= i;
			else zero ^= i;
		}

		int count = 0;
		for (int i = 0; i < n; i++) {
			if (zero == nums[i]) {
				count++;
				break;
			}
		}

		if (count) return { zero, one };
		return { one, zero };
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

		vector<int> ans = sol.findMissingRepeatingNumbers(arr);

		for (auto it : ans) {
			cout << it << " ";
		}

		cout << endl;
	}

	return 0;
}


/*
Test Input :
3
5
3 5 4 1 1
7
1 2 3 6 7 5 7
9
6 5 7 1 8 6 4 3 2

Test Output : 1
1 2
7 4
6 9
*/
