// TUF+ : Leaders in an Array https://takeuforward.org/plus/data-structures-and-algorithm/arrays/faqs-medium/leaders-in-an-array


/*
Approach:
Used Linear Traversal from end of the array to front

TC: O(N)
SC: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> leaders(vector<int>& nums) {
		vector<int> ans;
		if (nums.empty()) return ans;

		int max = INT_MIN;
		for (int i = nums.size() - 1; i >= 0; i--) {
			if (max < nums[i]) {
				max = nums[i];
				ans.push_back(max);
			}
		}

		reverse(ans.begin(), ans.end());
		return ans;
	}
};

int main(int argc, const char** argv) {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		vector<int> arr;

		for (int i = 0; i < n; i++) {
			int input;
			cin >> input;
			arr.push_back(input);
		}

		Solution sol;

		vector<int> res = sol.leaders(arr);

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

6
1 2 5 3 1 2

6
-3 4 5 1 -4 -5

Test Output : 1
5 3 2
5 1 -4 -5

*/
