// TUF+ : Rat in a Maze (https://takeuforward.org/plus/dsa/problems/rat-in-a-maze)

/*
Topics and Learnings: Recursion

Approach:
Used Recursion to solve this

Complexity Analysis:
TC: (4^(N^2))
SC: O(N^2)
*/

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> visited(5, vector<int>(5, 0));
vector<string> result;

class Solution {
public:
	void path(vector<vector<int>>& m, int x, int y, string dir, int n) {
		if (x == n - 1 && y == n - 1) {
			result.push_back(dir);
			return;
		}

		if (m[x][y] == 0) return;

		m[x][y] = 0;

		if (x > 0) path(m, x - 1, y, dir + 'U', n);

		if (y > 0) path(m, x, y - 1, dir + 'L', n);

		if (x < n - 1) path(m, x + 1, y, dir + 'D', n);

		if (y < n - 1) path(m, x, y + 1, dir + 'R', n);

		m[x][y] = 1;
	}

	vector<string> findPath(vector<vector<int>>& grid) {
		int n = grid.size();
		result.clear();

		if (grid[0][0] == 0 || grid[n - 1][n - 1] == 0)
			return result;

		path(grid, 0, 0, "", n);
		sort(result.begin(), result.end());

		return result;
	}
};

int main(int argc, const char** argv) {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		vector<vector<int>> mat;
		vector<int> arr;

		for (int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				int input;
				cin >> input;
				arr.push_back(input);
			}
			mat.push_back(arr);
		}

		Solution sol;
		vector<string> res = sol.findPath(mat);

		cout << "[";
		for (auto i : res) {
			cout << "\"" << i << "\"" << " ";
		}
		cout << "]" << endl;
	}

	return 0;
}

/*
Test Input :
3

4
1 0 0 0
1 1 0 1
1 1 0 0
0 1 1 1

2
1 0
1 0

3
1 0 0
1 1 0
0 1 1


Test Output :
["DDRDRR" "DRDDRR"]
[]
["DRDR"]

*/
