// TUF+ : Kth element of 2 sorted arrays https://takeuforward.org/plus/dsa/binary-search/faqs/kth-element-of-2-sorted-arrays)

/*
Topics and Learnings: Binary Search

Approach:
Used Binary Search to solve this

Complexity Analysis:
TC: O(log(min(M, N)))
SC: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int kthElement(vector<int>& a, vector<int>& b, int k) {
		int m = a.size();
		int n = b.size();

		if (m > n) {
			return kthElement(b, a, k);
		}

		int left = k;
		int low = max(0, k - n), high = min(k, m);
		while (low <= high) {
			int mid1 = (low + high) >> 1;
			int mid2 = left - mid1;
			int l1 = (mid1 > 0) ? a[mid1 - 1] : INT_MIN;
			int l2 = (mid2 > 0) ? b[mid2 - 1] : INT_MIN;
			int r1 = (mid1 < m) ? a[mid1] : INT_MAX;
			int r2 = (mid2 < n) ? b[mid2] : INT_MAX;

			if (l1 <= r2 && l2 <= r1) {
				return max(l1, l2);
			}
			else if (l1 > r2) {
				high = mid1 - 1;
			}
			else {
				low = mid1 + 1;
			}
		}

		return -1;
	}
};

int main(int argc, const char** argv) {
	int t;
	cin >> t;

	while (t--) {
		int n1, n2, k;
		cin >> n1 >> n2 >> k;

		vector<int> arr1, arr2;

		for (int i = 0; i < n1; i++) {
			int input;
			cin >> input;
			arr1.push_back(input);
		}

		for (int i = 0; i < n2; i++) {
			int input;
			cin >> input;
			arr2.push_back(input);
		}

		Solution sol;

		int res = sol.kthElement(arr1, arr2, k);
		cout << res << endl;
	}

	return 0;
}

/*
Test Input :
3

5 4 5
2 3 6 7 9
1 4 8 10

5 7 7
100 112 256 349 770
72 86 113 119 265 445 892

3 2 4
2 3 6
7 9

Test Output : 1
6
256
7

*/
