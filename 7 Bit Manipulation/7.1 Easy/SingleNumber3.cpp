// TUF+ : Single Number - III (https://takeuforward.org/plus/dsa/problems/single-number---iii)

/*
Topics and Learnings: Bit-Manipulation

Approach:
Used Bitwise-OR to solve this

Complexity Analysis:
TC: O(N)
SC: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> singleNumber(vector<int>& nums) {
		int n = nums.size();
		long XOR = 0;

		for (int i = 0; i < n; i++)
			XOR = XOR ^ nums[i];

		int rightmost = (XOR & (XOR - 1)) ^ XOR;
		int XOR1 = 0, XOR2 = 0;

		for (int i = 0; i < n; i++)
			if (nums[i] & rightmost) XOR1 = XOR1 ^ nums[i];
			else XOR2 = XOR2 ^ nums[i];

		if (XOR1 < XOR2) return { XOR1, XOR2 };
		return { XOR2, XOR1 };
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
		vector<int> res = sol.singleNumber(arr);

		for (auto i : res) {
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
1 2 1 3 5 2

2
-1 0

6
1 9 1 2 8 2

Test Output : 1
3 5
-1 0
8 9

*/
