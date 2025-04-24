// TUF+ : Prime factorisation of a Number (https://takeuforward.org/plus/dsa/problems/prime-factorisation-of-a-number)

/*
Topics and Learnings: Sieve of Eratosthenes

Approach:
Used Sieve of Eratosthenes to solve this

Complexity Analysis:
TC: O(max_N x log(log(max_N))) + O(N x log(num))
SC: O(max_N) + O(N x log(num))
*/

#include <bits/stdc++.h>
using namespace std;

#define MAX_N 100000
vector<int> SPF(MAX_N + 1, 1);

class Solution {
private:
	void sieve() {
		for (int i = 2; i <= MAX_N; i++) {
			if (SPF[i] == 1) {
				for (int j = i; j <= MAX_N; j += i) {
					if (SPF[j] == 1) {
						SPF[j] = i;
					}
				}
			}
		}
		return;
	}

	vector<int> primeFact(int n) {
		vector<int> ans;

		while (n != 1) {
			ans.push_back(SPF[n]);
			n = n / SPF[n];
		}
		return ans;
	}

public:
	vector<vector<int>> primeFactors(vector<int>& queries) {
		sieve();
		vector<vector<int>> ans;

		for (int i = 0; i < queries.size(); i++)
			ans.push_back(primeFact(queries[i]));

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
		vector<vector<int>> res = sol.primeFactors(arr);

		for(auto row : res) {
			for(auto ele : row) {
				cout << ele << " ";
			}
			cout << endl;
		}
		cout << endl;
	}

	return 0;
}

/*
Test Input :
3

5
2 3 4 5 6

3
7 12 18

2
15 20

Test Output : 1
2
3
2 2
5
2 3

7
2 2 3
2 3 3

3 5
2 2 5


*/
