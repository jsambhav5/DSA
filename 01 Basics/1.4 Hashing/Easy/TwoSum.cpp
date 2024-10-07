// LeetCode 1

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