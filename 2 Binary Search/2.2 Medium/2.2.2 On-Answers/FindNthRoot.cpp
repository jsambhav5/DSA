// TUF+ : Find Nth root of a number (https://takeuforward.org/plus/data-structures-and-algorithm/binary-search/on-answers/find-nth-root-of-a-number)

/*
Approach:
Used Bianry search to solve this problem with range from 1 to N

Complexiy Analysis:
TC: O(logM)
SC: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
	int possible(int N, int M, int K) {
		long long prod = 1;

		for (int i = 1; i <= N; i++) {
			prod *= K;
			if (prod > M) return 2;
		}
		if (prod == M) return 1;
		return 0;
	}

public:
	int NthRoot(int N, int M) {
		int low = 1, high = M;

		while (low <= high) {
			int mid = (low + high) / 2;
			int res = possible(N, M, mid);

			if (res == 1) return mid;
			else if (res == 0) low = mid + 1;
			else high = mid - 1;
		}

		return -1;
	}
};

int main(int argc, const char** argv) {
	int t;
	cin >> t;

	while (t--) {
		int N, M;
		cin >> N >> M;

		Solution sol;

		int ans = sol.NthRoot(N, M);

		cout << ans << endl;
	}

	return 0;
}

/*
Test Input :
3
3 27
4 69
4 81

Test Output : 1
3
-1
3

*/
