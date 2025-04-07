// TUF+ : Second Largest Element (https://takeuforward.org/plus/dsa/arrays/fundamentals/second-largest-element)

/*
Topics and Learnings:

Approach:
Used Linear Traversal to solve this

Complexity Analysis:
TC: O(N)
SC: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int secondLargestElement(vector<int>& nums) {
		int secondLargest = INT_MIN;
		int largest = nums[0];

		for (int i : nums) {
			if (i > largest) {
				secondLargest = largest;
				largest = i;
			}
			else if (i > secondLargest && i != largest) {
				secondLargest = i;
			}
		}
		return secondLargest != INT_MIN ? secondLargest : -1;
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
