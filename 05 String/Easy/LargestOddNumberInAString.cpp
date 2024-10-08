// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/beginner-problems/basic-strings/largest-odd-number-in-a-string

class Solution {
public:
	string largeOddNum(string& s) {
		int lastOddDigitIndex = -1, mostSignificantBit = 0;
		for (int i = s.length() - 1; i >= 0; i--) {
			if ((s[i] - '0') % 2 == 1) {
				lastOddDigitIndex = i;
				break;
			}
		}
		for (; mostSignificantBit < lastOddDigitIndex; mostSignificantBit++) {
			if (s[mostSignificantBit] != '0')
				break;
		}
		return s.substr(mostSignificantBit, lastOddDigitIndex - mostSignificantBit + 1);
	}
};