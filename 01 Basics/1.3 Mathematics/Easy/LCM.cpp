// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/beginner-problems/basic-maths/lcm-of-two-numbers

class Solution {
public:
	int GCD(int n1, int n2) {
		if (n1 == 0 || n1 == n2) return n2;
		int max_ = max(n1, n2);
		int min_ = min(n1, n2);
		return GCD(max_ % min_, min_);
	}

	int LCM(int n1, int n2) {
		return (n1 * n2) / GCD(n1, n2);
	}
};