// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/sorting/algorithms/selection-sort

/*
Topics and Learnings:

Approach:
Selection sort is a simple sorting algorithm. This sorting algorithm is an in-place comparison-based algorithm in which the list is divided into two parts, the sorted part at the left end and the unsorted part at the right end. Initially, the sorted part is empty and the unsorted part is the entire list.

Complexity Analysis:
TC: O(N^2)
SC: O(1)
*/

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

		vector<int> res = sol.selectionSort(arr);

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
