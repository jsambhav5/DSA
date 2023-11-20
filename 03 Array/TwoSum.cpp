#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
	map<int, int> mem;
	for (int i = 0; i < nums.size(); i++)
		if (mem[target - nums[i]])
			return vector<int>({ mem[target - nums[i]] - 1, i });
		else mem[nums[i]] = i + 1;
	return vector<int>({ -1 });
}

int main(int argc, const char** argv) {
	vector<int> nums = { 1, 2, 3, 4, 5 };
	int target = 3;
	vector<int> result = twoSum(nums, target);
	for (auto x : result)
		cout << x << " ";
	return 0;
}