// LeetCode : 14
// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/beginner-problems/basic-strings/longest-common-prefix/submissions

class Solution {
public:
	string longestCommonPrefix(vector<string>& str) {
		string res = "";
		bool flag = true;
		for (int i = 0; i < str[0].size(); i++) {
			for (int j = 1; j < str.size(); j++) {
				if (str[j][i] != str[0][i]) {
					flag = false;
					break;
				}
			}
			if (flag) res += str[0][i];
			else break;
		}
		return res;
	}
};