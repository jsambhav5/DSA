//  Leetcode 125

#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
	bool checkPalindrome(string s, int start, int end) {
		if (start >= end) return true;

		if (!isalnum(s[start]))
			return checkPalindrome(s, start + 1, end);

		if (!isalnum(s[end]))
			return checkPalindrome(s, start, end - 1);

		if (tolower(s[start]) != tolower(s[end]))
			return false;
		return checkPalindrome(s, start + 1, end - 1);
	}
public:
	bool isPalindrome(string s) {
		return checkPalindrome(s, 0, s.length() - 1);
	}
};

int main(int argc, char const* argv[]) {
	string str = "race a car";
	Solution s;
	cout << s.isPalindrome(str);
	return 0;
}
