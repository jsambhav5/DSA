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
		vector<int> res;
		int n = nums.size();
		int max_ = INT_MIN;

		for (int i = n - 1; i >= 0; i--) {
			int num = nums[i];

			if (max_ < num) {
				res.push_back(num);
				max_ = num;
			}
		}

		reverse(res.begin(), res.end());
		return res;
	}
};

int main() {
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
