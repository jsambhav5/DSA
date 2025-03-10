// TUF+ : Union of two sorted arrays (https://takeuforward.org/plus/data-structures-and-algorithm/arrays/logic-building/union-of-two-sorted-arrays)

/*
Topics and Learnings:

Approach:
Used Linear Traversal to solve this.
Similar to merging of two sorted array with additional conditions

Complexiy Analysis:
TC: O(N1 + N2)
SC: O(N1 + N2)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
		vector<int> arr;
		int i = 0, j = 0;
		while (i < nums1.size() && j < nums2.size()) {
			if (nums1[i] <= nums2[j]) {
				if (arr.size() == 0 || nums1[i] != arr.back())
					arr.push_back(nums1[i]);
				i++;
			}
			else {
				if (arr.size() == 0 || nums2[j] != arr.back())
					arr.push_back(nums2[j]);
				j++;
			}
		}

		while (i < nums1.size()) {
			if (nums1[i] != arr.back())
				arr.push_back(nums1[i]);
			i++;
		}

		while (j < nums2.size()) {
			if (nums2[j] != arr.back())
				arr.push_back(nums2[j]);
			j++;
		}

		return arr;
	}
};

int main(int argc, const char** argv) {
	int t;
	cin >> t;

	while (t--) {
		int n1, n2;
		cin >> n1 >> n2;

		vector<int> nums1, nums2;

		for (int i = 0; i < n1; i++) {
			int input;
			cin >> input;
			nums1.push_back(input);
		}

		for (int i = 0; i < n2; i++) {
			int input;
			cin >> input;
			nums2.push_back(input);
		}

		Solution sol;

		vector<int> res = sol.unionArray(nums1, nums2);

		for (auto i : res) {
			cout << i << " ";
		}

		cout << endl;
	}

	return 0;
}

/*
Test Input :
2

5 3
1 2 3 4 5
1 2 7

6 5
3 4 6 7 9 9
1 5 7 8 8

Test Output : 1
1 2 3 4 5 7
1 3 4 5 6 7 8 9

*/
