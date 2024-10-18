// LeetCode : 48 - Rotate Image
// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/arrays/faqs-medium/rotate-matrix-by-90-degree

/*
	1 2 3 2				1 4 7 8 			8 7 4 1
	4 5 6 4		T=>		2 5 8 4		M=>		4 8 5 2		T - Transpose
	7 8 9 9				3 6 9 1				1 9 6 3		M - Mirror about middle y-axis
	8 4 1 4				2 4 9 4				4 9 4 2
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
	void transpose(vector<vector<int>>& arr) {
		int n = arr.size();
		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++) {
				swap(arr[i][j], arr[j][i]);
			}
		}
	}

	void mirrorY(vector<vector<int>>& arr) {
		int n = arr.size();
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n / 2; j++) {
				swap(arr[i][j], arr[i][n - j - 1]);
			}
		}
	}

public:
	void rotate(vector<vector<int>>& arr) {
		transpose(arr);
		mirrorY(arr);
	}
};

int main(int argc, char const* argv[])
{
	vector<vector<int>> arr = { {1, 2, 3, 2}, {4, 5, 6, 4}, {7, 8, 9, 9}, {8, 4, 1, 4} };

	// Create an instance of the Solution class
	Solution sol;

	sol.rotate(arr);

	// Print the rotated matrix
	cout << "Rotated Image" << endl;
	for (int i = 0; i < arr.size(); i++) {
		for (int j = 0; j < arr[0].size(); j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
