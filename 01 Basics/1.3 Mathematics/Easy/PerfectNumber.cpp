// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/beginner-problems/basic-maths/check-for-perfect-number

class Solution {
public:
	bool isPerfect(int n) {
		int sum = 0;
		for (int i = 1; i <= n / 2; i++)
			if (n % i == 0)
				sum += i;
		return sum == n;
	}
};