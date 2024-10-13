// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/sorting/algorithms/selection-sort

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> selectionSort(vector<int>& nums) {
		for (int i = 0; i < nums.size() - 1; i++) {
			int minIndex = i;
			for (int j = i + 1; j < nums.size(); j++) {
				if (nums[j] < nums[minIndex])
					minIndex = j;
			}
			if (minIndex != i)
				swap(nums[i], nums[minIndex]);
		}
		return nums;
	}
};

int main(int argc, char const* argv[]) {
	Solution s;
	vector<int> v = { 2, 3, 1, 5, 4 };
	s.selectionSort(v);
	for (auto i : v)
		cout << i << " ";
	return 0;
}