// TUF+ : XOR of numbers in a given range (https://takeuforward.org/plus/dsa/problems/xor-of-numbers-in-a-given-range)

/*
Topics and Learnings: Bit-Manipulation

Approach:
Used Bitwise-OR to solve this

Complexity Analysis:
TC: O(1)
SC: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
	int XORtillN(int n) {
		if (n % 4 == 1) return 1;
		if (n % 4 == 2) return n + 1;
		if (n % 4 == 3) return 0;
		return n;
	}

public:
	int findRangeXOR(int l, int r) {
		return XORtillN(l - 1) ^ XORtillN(r);
	}
};

int main(int argc, const char** argv) {
	int t;
	cin >> t;

	while (t--) {
		int L, R;
		cin >> L >> R;

		Solution sol;
		int res = sol.findRangeXOR(L, R);
		cout << res << endl;
	}

	return 0;
}

/*
Test Input :
3

3 5
1 3
4 10

Test Output : 1
2
0
11

*/
