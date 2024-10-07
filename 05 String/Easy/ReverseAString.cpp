// LeetCode 344

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	void reverseString(string& s) {
		int n = s.size();
		for (int i = 0; i < n / 2; i++) {
			swap(s[i], s[n - i - 1]);
		}
	}
};

int main(int argc, char const* argv[]) {
	string str;
	getline(cin, str);
	Solution s;
	s.reverseString(str);
	cout << str;
	return 0;
}
