// TUF+ : Merge two sorted arrays without extra space (https://takeuforward.org/plus/dsa/arrays/faqs-hard/merge-two-sorted-arrays-without-extra-space)

/*
Topics and Learnings: Array, Two-Pointers

Approach:
Used Two-Pointers to solve this

Complexity Analysis:
TC: O((N+M)xlog(N+M))
SC: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		int len = n + m;
		int gap = (len / 2) + (len % 2);

		while (gap > 0) {
			int left = 0;
			int right = left + gap;
			while (right < len) {
				if (left < m && right >= m)
					swapIfGreater(nums1, nums2, left, right - m);
				else if (left >= m)
					swapIfGreater(nums2, nums2, left - m, right - m);
				else
					swapIfGreater(nums1, nums1, left, right);
				left++, right++;
			}
			if (gap == 1) break;
			gap = (gap / 2) + (gap % 2);
		}

		for (int i = m; i < m + n; i++)
			nums1[i] = nums2[i - m];
	}

private:
	void swapIfGreater(vector<int>& arr1, vector<int>& arr2, int idx1, int idx2) {
		if (arr1[idx1] > arr2[idx2]) {
			swap(arr1[idx1], arr2[idx2]);
		}
	}
};

int main(int argc, const char** argv) {
	int t;
	cin >> t;

	while (t--) {
		int n1, n2;
		cin >> n1 >> n2;

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
			arr1.push_back(0);
		}

		Solution sol;

		sol.merge(arr1, n1, arr2, n2);

		for (auto i : arr1) {
			cout << i << " ";
		}

		cout << endl;
	}

	return 0;
}

/*
Test Input :
3

4 3
-5 -2 4 5
-3 1 8

4 3
0 2 7 8
-7 -3 -1

3 4
1 3 5
2 4 6 7

Test Output : 1
-5 -3 -2 1 4 5 8
-7 -3 -1 0 2 7 8
1 2 3 4 5 6 7

*/
