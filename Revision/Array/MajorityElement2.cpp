// LeetCode : 229 - Majority Element II (https://leetcode.com/problems/majority-element-ii/description/)
// TUF+ : Majority Element-II (https://takeuforward.org/plus/dsa/arrays/faqs-hard/majority-element-ii)

/*
Topics and Learnings:

Approach:
Used modified Moore's Voting Algorithm to solve this

Complexity Analysis:
TC: O(N)
SC: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> majorityElement(vector<int>& nums) {
		int n = nums.size();
		int element1, element2;
		int count1 = 0, count2 = 0;
		vector<int> res;

		for (int i : nums) {
			if (count1 == 0 && i != element2) {
				element1 = i;
				count1 = 1;
			}
			else if (count2 == 0 && i != element1) {
				element2 = i;
				count2 = 1;
			}
			else if (i == element1) {
				count1++;
			}
			else if (i == element2) {
				count2++;
			}
			else {
				count1--;
				count2--;
			}
		}

		count1 = 0;
		count2 = 0;

		for (int i : nums) {
			if (i == element1) count1++;
			if (i == element2) count2++;
		}

		if (count1 > n / 3)
			res.push_back(element1);

		if (count2 > n / 3)
			res.push_back(element2);

		return res;
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

		vector<int> res = sol.majorityElement(arr);

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

6
1 2 1 1 3 2

7
1 2 1 1 3 2 2

8
1 2 1 1 3 2 2 3

Test Output : 1
1
1 2
1 2

*/
