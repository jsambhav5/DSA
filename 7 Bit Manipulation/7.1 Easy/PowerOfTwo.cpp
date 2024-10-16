// LeetCode : 231

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	bool isPowerOfTwo(int n) {
		if (n < 1)
			return false;
		return !(n & n - 1); //Brian Kerningam's Algorithm
	}
}S;

int main(int argc, const char** argv) {
	int num;
	cin >> num;
	if (S.isPowerOfTwo(num))
		cout << "true";
	else
		cout << "false";
	return 0;
}