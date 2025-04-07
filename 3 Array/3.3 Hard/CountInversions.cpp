// TUF+ : Count Inversions (https://takeuforward.org/plus/dsa/arrays/faqs-hard/count-inversions)

/*
Topics and Learnings: Merge Sort, Array

Approach:
Used Merge Sort to solve this

Complexity Analysis:
TC: O(N * logN)
SC: O(N)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	long long int numberOfInversions(vector<int> nums) {
		int n = nums.size();

		int ans = 0;

		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if (nums[i] > nums[j])
					ans++;
			}
		}

		return ans;
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

		int ans = sol.numberOfInversions(arr);

		cout << ans << endl;
	}

	return 0;
}

/*
Test Input :
3

6
2 3 7 1 3 5

6
-10 -5 6 11 15 17

4
9 5 4 2

Test Output : 1
5
0
6

*/
