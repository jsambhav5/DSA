// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/beginner-problems/basic-strings/palindrome-check

class Solution {
public:
	bool palindromeCheck(string& s) {
		int n = s.size();
		for (int i = 0; i < n / 2; i++) {
			if (s[i] != s[n - i - 1])
				return false;
		}
		return true;
	}
};