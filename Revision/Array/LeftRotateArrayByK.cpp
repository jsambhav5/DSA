// TUF+ : Left Rotate Array by K Places (https://takeuforward.org/plus/dsa/arrays/fundamentals/left-rotate-array)

/*
Approach:
a) Reverse first k elements
b) Reverse remaining elements
c) Reverse the whole array

TC: O(N)
SC: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	void rotateArray(vector<int>& nums, int k) {
		int n = nums.size();
		k = k % n;
		reverse(nums.begin(), nums.begin() + k);
		reverse(nums.begin() + k, nums.end());
		reverse(nums.begin(), nums.end());
	}
};

int main() {
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

		sol.rotateArray(arr, k);

		for (auto i : arr) {
			cout << i << " ";
		}

		cout << endl;
	}

	return 0;
}

/*
Test Input :
2

5 2
1 2 3 4 5

4 3
-1 0 3 6

Test Output : 1
3 4 5 1 2
6 -1 0 3

*/
