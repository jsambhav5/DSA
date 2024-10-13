// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/beginner-problems/basic-recursion/check-if-string-is-palindrome-or-not-

class Solution {
private:
	bool checkPalindome(string& s, int start, int end) {
		if (start < end) {
			if (s[start] != s[end]) return false;
			return checkPalindome(s, start + 1, end - 1);
		}
		return true;
	}
public:
	bool palindromeCheck(string& s) {
		checkPalindome(s, 0, s.length() - 1);
	}
};