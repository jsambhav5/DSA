// TUF+ : Find square root of a number (https://takeuforward.org/plus/data-structures-and-algorithm/binary-search/on-answers/find-square-root-of-a-number)

/*
Approach:
if mid*mid < number, eliminate left
else eleminate right
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	long long floorSqrt(long long n) {
		long long low = 1, high = n;

		while (low <= high) {
			long long mid = (low + high) / 2;
			long long val = mid * mid;

			if (val <= (long long)n)
				low = mid + 1;

			else high = mid - 1;
		}

		return high;
	}
};

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		Solution sol;

		int ans = sol.floorSqrt(n);
			
		cout << ans << endl;
	}

	return 0;
}

/*
Test Input : 
3
36
28
50

Test Output : 1
6
5
7

*/ 