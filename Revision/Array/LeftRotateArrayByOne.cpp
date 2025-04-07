// TUF+ : Left Rotate Array by One (https://takeuforward.org/plus/data-structures-and-algorithm/arrays/fundamentals/left-rotate-array-by-one)

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
	void rotateArrayByOne(vector<int>& nums) {
		if (nums.size() == 1) return;
		int temp = nums[0];
		for (int i = 0; i < nums.size() - 1; i++)
			nums[i] = nums[i + 1];
		nums[nums.size() - 1] = temp;
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

		sol.rotateArrayByOne(arr);

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

5
1 2 3 4 5

4
-1 0 3 6

Test Output : 1
2 3 4 5 1
0 3 6 -1

*/
