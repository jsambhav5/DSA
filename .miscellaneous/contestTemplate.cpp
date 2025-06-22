#include <bits/stdc++.h>
#define LL long long int
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
	LL t;
	cin >> t;

	while (t--) {
		LL n;
		cin >> n;

		vector<int> arr;

		for (int i = 0; i < n; i++) {
			int input;
			cin >> input;
			arr.push_back(input);
		}

		Solution sol;

		vector<int> ans = sol.FUNCTION(arr);

		for (auto i : ans) {
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
