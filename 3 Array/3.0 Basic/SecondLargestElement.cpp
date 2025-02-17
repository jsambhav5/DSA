// TUF+ : Second Largest Element (https://takeuforward.org/plus/data-structures-and-algorithm/arrays/fundamentals/second-largest-element)

/*
Approach:
Used Linear Traversal to solve this

TC: O(N)
SC: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int secondLargestElement(vector<int>& nums) {
		if (nums.size() < 2) return -1;
		int maxEle = nums[0], secondMaxEle = INT_MIN, flag = 0;
		for (int i : nums) {
			if (i > maxEle) {
				secondMaxEle = maxEle;
				maxEle = i;
				flag = 1;
			}
			else if (i > secondMaxEle && i != maxEle) {
				secondMaxEle = i;
				flag = 1;
			}
		}
		if (flag == 0) return -1;
		return secondMaxEle;
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

		int res = sol.secondLargestElement(arr);

		cout << res << endl;
	}

	return 0;
}

/*
Test Input :
2

5
8 8 7 6 5

5
10 10 10 10 10

Test Output : 1
7
-1

*/
