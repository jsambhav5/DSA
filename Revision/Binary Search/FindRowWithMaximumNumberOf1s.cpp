// TUF+ : Find row with maximum 1's (https://takeuforward.org/plus/dsa/binary-search/2d-arrays/find-row-with-maximum-1's)

/*
Topics and Learnings: Binary Search

Approach:
Used Binary Search to count number of 1s in rach row

Complexity Analysis:
TC: O(N*logM)
SC: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
	int countOnes(int n, vector<int>& arr, int res) {
		int count = 0;
		int low = 0;
		int high = arr.size() - 1;

		while (low <= high) {
			int mid = (low + high) / 2;

			if (arr[mid] == 0) {
				if (n - mid < res) return -1;
				low = mid + 1;
			}
			else {
				high = mid - 1;
				count = n - mid;
			};
		}

		return count;
	}

public:
	int rowWithMax1s(vector<vector<int>>& mat) {
		int n = mat.size();
		int m = mat[0].size();

		int res = -1;
		int maxOne = 0;

		for (int i = 0; i < n; i++) {
			int count = countOnes(m, mat[i], maxOne);
			if (count > maxOne) {
				maxOne = count;
				res = i;
			}
		}

		return res;
	}
};

int main(int argc, const char** argv) {
	int t;
	cin >> t;

	while (t--) {
		int n, m;
		cin >> n >> m;

		vector<vector<int>> matrix;
		vector<int> arr;

		for (int i = 0; i < n; i++) {
			for (int i = 0; i < m; i++) {
				int input;
				cin >> input;
				arr.push_back(input);
			}
			matrix.push_back(arr);
			arr.clear();
		}

		Solution sol;
		int res = sol.rowWithMax1s(matrix);
		cout << res << endl;
	}

	return 0;
}

/*
Test Input :
3

3 3
1 1 1
0 0 1
0 0 0

2 2
0 0
0 0

3 3
0 0 1
0 1 1
0 1 1

Test Output : 1
0
-1
1

*/
