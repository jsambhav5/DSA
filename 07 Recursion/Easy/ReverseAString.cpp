// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/beginner-problems/basic-recursion/reverse-a-string

class Solution {
private:
	void rev(vector<char>& s, int start, int end) {
		if (start < end) {
			swap(s[start], s[end]);
			rev(s, start + 1, end - 1);
		}
	}
public:
	vector<char> reverseString(vector<char>& s) {
		rev(s, 0, s.size() - 1);
		return s;
	}
};