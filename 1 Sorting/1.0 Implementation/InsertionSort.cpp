// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/sorting/algorithms/insertion-sorting

/*
Approach:
Insertion Sort is a simple sorting algorithm that works the way we sort playing cards in our hands.

TC: O(N^2)
SC: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> insertionSort(vector<int>& nums) {
		for (int i = 0; i < nums.size() - 1; i++)
			for (int j = i + 1; j > 0; j--)
				if (nums[j] < nums[j - 1])
					swap(nums[j], nums[j - 1]);
				else break;
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

		vector<int> res = sol.insertionSort(arr);

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
