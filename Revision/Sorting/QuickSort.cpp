// TUF+ : Quick Sorting (https://takeuforward.org/plus/dsa/sorting/algorithms/quick-sorting)

/*
Topics and Learnings: Quick Sort

Approach:
Quick Sort

Complexiy Analysis:
TC: O(N*LogN)
SC: O(N)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
	void quickSortRecursive(vector<int>& nums, int low, int high) {
		if (low >= high) return;
		int pivot = partition(nums, low, high);
		quickSortRecursive(nums, low, pivot - 1);
		quickSortRecursive(nums, pivot + 1, high);
	}

	int partition(vector<int>& nums, int low, int high) {
		int pivot = nums[low];
		int i = low;
		int j = high;

		while (i < j) {
			while (nums[i] <= pivot && i <= high - 1)
				i++;

			while (nums[j] >= pivot && j >= low + 1)
				j--;

			if (i < j) swap(nums[i], nums[j]);
		}

		swap(nums[low], nums[j]);

		return j;
	}

public:
	vector<int> quickSort(vector<int>& nums) {
		quickSortRecursive(nums, 0, nums.size() - 1);
		return nums;
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

		vector<int> res = sol.quickSort(arr);

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

5
7 4 1 5 3

4
5 4 4 1 1

5
3 2 3 4 5

Test Output : 1
1 3 4 5 7
1 1 4 4 5
2 3 3 4 5

*/
