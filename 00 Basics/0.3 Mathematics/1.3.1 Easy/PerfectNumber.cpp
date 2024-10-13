// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/beginner-problems/basic-maths/check-for-perfect-number
// LeetCode 507

class Solution {
public:
	bool checkPerfectNumber(int num) {
		// int sum = 0;
		// for (int i = 1; i <= num / 2; i++)
		// 	if (num % i == 0)
		// 		sum += i;
		// return sum == num;

		if (num <= 0) return false;
		int sum = 0;
		for (int i = 1; i * i <= num; i++) {
			if (num % i == 0) {
				sum += i;
				if (i != num / i)
					sum += num / i;
			}
		}
		return sum - num == num;
	}
};