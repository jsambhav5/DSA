// LeetCode : 1 - Two Sum (https://leetcode.com/problems/two-sum/description/)
// TUF+ : Two Sum (https://takeuforward.org/plus/dsa/arrays/faqs-medium/two-sum)

/*
Approach:
Used Hashing to solve this

Complexiy Analysis:
TC: O(N)
SC: O(N)
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> result;
		map<int, int> mem;
		for (int i = 0; i < nums.size(); i++)
			if (mem[target - nums[i]]) {
				result.push_back(mem[target - nums[i]] - 1);
				result.push_back(i);
				break;
			}
			else mem[nums[i]] = i + 1;
		return result;
	}
};

int main(int argc, const char** argv) {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		int target;
		cin >> target;

		vector<int> arr;

		for (int i = 0; i < n; i++) {
			int input;
			cin >> input;
			arr.push_back(input);
		}

		Solution sol;

		vector<int> res = sol.twoSum(arr, target);

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

4 9
2 7 11 15

3 6
3 2 4

2 6
3 3

Test Output : 1
0 1
1 2
0 1

*/
