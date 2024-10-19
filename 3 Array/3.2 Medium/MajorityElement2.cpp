// LeetCode : 229 - Majority Element II
// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/arrays/faqs-hard/majority-element-ii

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> majorityElementTwo(vector<int>& nums) {
		int n = nums.size();

		int num1 = INT_MIN;
		int num2 = INT_MIN;

		int count1 = 0;
		int count2 = 0;

		for (int i = 0; i < nums.size(); i++) {
			if (count1 == 0 && nums[i] != num2) {
				count1 = 1;
				num1 = nums[i];
			}

			else if (count2 == 0 && nums[i] != num1) {
				count2 = 1;
				num2 = nums[i];
			}

			else if (nums[i] == num1)
				count1++;

			else if (nums[i] == num2)
				count2++;

			else {
				count1--;
				count2--;
			}
		}

		count1 = 0;
		count2 = 0;

		for (int i = 0; i < n; i++) {
			if (nums[i] == num1) count1++;
			if (nums[i] == num2) count2++;
		}

		int min = (n / 3) + 1;

		vector<int> ans;

		if (count1 >= min) ans.push_back(num1);
		if (count2 >= min) ans.push_back(num2);

		return ans;
	}
};

int main() {
	int n;
	cin >> n;

	vector<int> arr;

	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		arr.push_back(input);
	}

	Solution sol;

	vector<int> ans = sol.majorityElementTwo(arr);

	for (auto it : ans) {
		cout << it << " ";
	}
	cout << "\n";

	return 0;
}

// Test Input : 6 11 33 33 11 33 11
// Test Output : 11 33