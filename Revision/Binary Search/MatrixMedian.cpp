// TUF+ : Matrix Median (https://takeuforward.org/plus/dsa/binary-search/2d-arrays/matrix-median)

/*
Topics and Learnings: Binary Search, 2-D Array

Approach:
Used Binary Search to solve this

Complexity Analysis:
TC: O(M*log(N))
SC: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
	int upperBound(vector<int>& arr, int x, int m) {
		int low = 0, high = m - 1;
		int ans = m;
		while (low <= high) {
			int mid = (low + high) / 2;
			if (arr[mid] > x) {
				ans = mid;
				high = mid - 1;
			}
			else low = mid + 1;
		}
		return ans;
	}
	int countSmallEqual(vector<vector<int>>& matrix, int n, int m, int x) {
		int cnt = 0;
		for (int i = 0; i < n; i++)
			cnt += upperBound(matrix[i], x, m);
		return cnt;
	}
public:
	int findMedian(vector<vector<int>>& matrix) {
		int n = matrix.size();
		int m = matrix[0].size();
		int low = INT_MAX, high = INT_MIN;
		for (int i = 0; i < n; i++) {
			low = min(low, matrix[i][0]);
			high = max(high, matrix[i][m - 1]);
		}
		int req = (n * m) / 2;
		while (low <= high) {
			int mid = low + (high - low) / 2;
			int smallEqual = countSmallEqual(matrix, n, m, mid);
			if (smallEqual <= req) low = mid + 1;
			else high = mid - 1;
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
		int res = sol.findMedian(matrix);
		cout << res << endl;
	}

	return 0;
}

/*
Test Input :
3

3 3
1, 4, 9, 2, 5, 6, 3, 8, 7

3 3
1, 3, 8, 2, 3, 4, 1, 2, 5

3 3
1, 4, 15, 2, 5, 6, 3, 8, 11

Test Output :
5
3
5

*/
