// TUF+ : Power of a Number using Recursion (https://takeuforward.org/plus/data-structures-and-algorithm/recursion/implementation-problems/pow(x,n))

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	double myPow(double x, int n) {
		if (n < 0)
			return myPow(x, n + 1) / x;

		if (n > 0)
			return myPow(x, n - 1) * x;

		return 1;
	}
};

int main() {
	int t;
	cin >> t;

	while (t--) {
		double x;
		int n;
		cin  >> x >> n;

		Solution sol;

		double ans = sol.myPow(x, n);

		cout << ans << endl;
	}

	return 0;
}

/*
Test Input : 
3

2.0000
10

2.0000
-2

2.5000
2

Test Output : 1
1024.0000
0.2500
6.25

*/ 