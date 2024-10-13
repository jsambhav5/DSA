// LeetCode : 796
// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/beginner-problems/basic-strings/rotate-string

class Solution {
public:
	bool rotateString(string& s, string& goal) {
		if (s.length() != goal.length()) return false;
		s = s + s;
		// int len = goal.length();
		// for(int i = 0; i < len; i++) {
		// 	if(goal == s.substr(i, len)) return true;
		// }
		// return false;
		return s.find(goal) != string::npos;
	}
};