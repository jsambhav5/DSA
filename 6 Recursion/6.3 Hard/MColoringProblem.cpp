// TUF+ : M Coloring Problem (https://takeuforward.org/plus/dsa/problems/m-coloring-problem)

/*
Topics and Learnings: Recursion

Approach:
Used Recursion to solve this

Complexity Analysis:
TC: (M^N)
SC: O(N)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

	bool isSafe(int col, int node, vector<int>& colors, vector<int> adj[]) {
		for (int i = 0; i < adj[node].size(); i++) {
			if (colors[adj[node][i]] == col) return false;
		}
		return true;
	}

	bool solve(int node, int m, int n, vector<int>& colors, vector<int> adj[]) {
		if (n == node) return true;
		for (int i = 1; i <= m; i++) {
			if (isSafe(i, node, colors, adj)) {
				colors[node] = i;
				if (solve(node + 1, m, n, colors, adj)) return true;
				colors[node] = 0;
			}
		}
		return false;
	}

	bool graphColoring(vector<vector<int>>& edges, int m, int n) {
		vector<int> adj[n];

		for (int i = 0; i < edges.size(); i++) {
			adj[edges[i][0]].push_back(edges[i][1]);
			adj[edges[i][1]].push_back(edges[i][0]);
		}

		vector<int> colors(n, 0);
		return solve(0, m, n, colors, adj);
	}
};

int main(int argc, const char** argv) {
	int t;
	cin >> t;

	while (t--) {
		int m, n, e;
		cin >> m >> n >> e;

		vector<vector<int>> edges;
		vector<int> arr;

		for (int i = 0; i < e; i++) {
			for (int j = 0; j < 2; j++) {
				int input;
				cin >> input;
				arr.push_back(input);
			}
			edges.push_back(arr);
		}

		Solution sol;
		bool res = sol.graphColoring(edges, m, n);
		cout << res << endl;
	}

	return 0;
}

/*
Test Input :
3

4 3 5
0 1
1 2
2 3
3 0
0 2

3 2 3
0 1
1 2
0 2

5 3 5
0 1
1 2
0 2
2 3
2 4
3 4

Test Output :
1
1
1

*/
