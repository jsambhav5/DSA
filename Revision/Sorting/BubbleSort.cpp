// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/sorting/algorithms/bubble-sort

/*
Topics and Learnings:

Approach:
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.

Complexiy Analysis:
TC: O(N^2)
SC: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> bubbleSort(vector<int>& nums) {
		int n = nums.size();
		for (int i = n; i > 1; i--) {
			for (int j = 1; j < i; j++) {
				if (nums[j] < nums[j - 1]) {
					swap(nums[j], nums[j - 1]);
				}
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

		vector<int> res = sol.bubbleSort(arr);

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
