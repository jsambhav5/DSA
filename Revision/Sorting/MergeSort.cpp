// TUF+ : https://takeuforward.org/plus/dsa/sorting/algorithms/merge-sorting

/*
Topics and Learnings:

Approach:
Merge Sort is a Divide and Conquer algorithm. It divides input array in two halves, calls itself for the two halves and then merges the two sorted halves.

Complexiy Analysis:
TC: O(N * logN)
SC: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
	void merge(vector<int>& nums, int low, int mid, int high) {
		vector<int> temp;
		int left = 0;
		int right = mid + 1;
		int n = nums.size();

		while (left <= mid && right <= n - 1) {
			if (nums[left] <= nums[right]) {
				temp.push_back(nums[left++]);
			}
			else {
				temp.push_back(nums[right++]);
			}
		}

		while (left <= mid) {
			temp.push_back(nums[left++]);
		}

		while (right <= n - 1) {
			temp.push_back(nums[right++]);
		}
	}

	void mergeSortHelper(vector<int>& nums, int low, int high) {
		if (low < high) {
			int mid = (low + high) / 2;
			mergeSortHelper(nums, low, mid);
			mergeSortHelper(nums, mid + 1, high);
			merge(nums, low, mid, high);
		}
	}

public:
	vector<int> mergeSort(vector<int>& nums) {
		int n = nums.size();
		for (int i = 1; i < n; i++) {
			int j = i - 1;
			while (nums[j] > nums[j + 1] && j >= 0) {
				swap(nums[j], nums[j + 1]);
				j--;
			}
		}
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

		vector<int> res = sol.mergeSort(arr);

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

5
7 4 1 5 3

5
5 4 4 1 1

Test Output : 1
1 3 4 5 7
1 1 4 4 5

*/
