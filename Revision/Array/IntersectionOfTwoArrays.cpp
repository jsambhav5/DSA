// TUF+ : Intersection of two sorted arrays (https://takeuforward.org/plus/data-structures-and-algorithm/arrays/logic-building/intersection-of-two-sorted-arrays)

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
	vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
		vector<int> nums;
		int n1 = nums1.size();
		int n2 = nums2.size();
		int i1 = 0, i2 = 0;

		while (i1 < n1 && i2 < n2) {
			int num1 = nums1[i1];
			int num2 = nums2[i2];

			if (num1 == num2) {
				nums.push_back(num1);
				i1++;
				i2++;
			}
			else if (num1 < num2) {
				i1++;
			}
			else {
				i2++;
			}
		}
		return nums;
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

		vector<int> res = sol.intersectionArray(nums1, nums2);

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
1 2 2 3 5
1 2 7

4 3
1 2 2 3
4 5 7

Test Output : 1
1 2


*/
