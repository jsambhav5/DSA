// TUF+ : Subsets I (https://takeuforward.org/plus/dsa/problems/subsets-i)

/*
Topics and Learnings: Recursion

Approach:
Used Recursion to solve this

Complexity Analysis:
TC: O(2^N)
SC: O(2^N)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
	void func(int ind, int sum, vector<int>& nums, vector<int>& ans) {
		if (ind == nums.size()) {
			ans.push_back(sum);
			return;
		}

		func(ind + 1, sum + nums[ind], nums, ans);
		func(ind + 1, sum, nums, ans);
	}

public:
	vector<int> subsetSums(vector<int>& nums) {
		vector<int> ans;
		func(0, 0, nums, ans);
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
		vector<int> res = sol.subsetSums(arr);

		for (auto i : res) {
			cout << i << " ";
		}
		cout << endl;
	}

	return 0;
}

/*
Test Input :
3

2
2 3

3
5 2 1

1
1

Test Output : 1
5 2 3 0
8 7 6 5 3 2 1 0
1 0

*/
