// TUF+ : Book Allocation Problem (https://takeuforward.org/plus/dsa/binary-search/faqs/book-allocation-problem)

/*
Topics and Learnings: Binary Search

Approach:
Used Binary Search to solve this

Complexity Analysis:
TC: O(N * log(sum-max))
SC: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
	int countStudents(vector<int>& nums, int pages) {
		int n = nums.size();
		int students = 1;
		int pagesStudent = 0;

		for (int i = 0; i < n; i++) {
			if (pagesStudent + nums[i] <= pages) {
				pagesStudent += nums[i];
			}
			else {
				students++;
				pagesStudent = nums[i];
			}
		}
		return students;
	}
public:
	int findPages(vector<int>& nums, int m) {
		int n = nums.size();

		if (m > n) return -1;

		int low = *max_element(nums.begin(), nums.end());
		int high = accumulate(nums.begin(), nums.end(), 0);

		while (low <= high) {
			int mid = (low + high) / 2;
			int students = countStudents(nums, mid);
			if (students > m) {
				low = mid + 1;
			}
			else {
				high = mid - 1;
			}
		}
		return low;
	}
};

int main(int argc, const char** argv) {
	int t;
	cin >> t;

	while (t--) {
		int n, m;
		cin >> n >> m;

		vector<int> arr;

		for (int i = 0; i < n; i++) {
			int input;
			cin >> input;
			arr.push_back(input);
		}

		Solution sol;

		int res = sol.findPages(arr, m);
		cout << res << endl;
	}

	return 0;
}

/*
Test Input :
3

4 2
12 34 67 90

5 4
25 46 28 49 24

3 2
15 17 20

Test Output : 1
113
71
32

*/
