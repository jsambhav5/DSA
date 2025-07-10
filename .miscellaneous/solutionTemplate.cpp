// LeetCode : NUMBER - NAME (LINK)
// TUF+ : NAME (LINK)

/*
Topics and Learnings: TOPIC1, TOPIC2

Approach:
APPROACH

Complexity Analysis:
TC: O()
SC: O()
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:

public:
	vector<int> FUNCTION(vector<int>& arr) {
		int n = arr.size();

		vector<int> res;

		return res;
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

		vector<int> res = sol.FUNCTION(arr);

		for (auto i : res) {
			cout << i << " ";
		}

		cout << endl;
	}

	return 0;
}

/*
Test Input :
INPUT

Test Output : 1
OUTPUT

*/
