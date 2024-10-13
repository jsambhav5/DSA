// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/beginner-problems/basic-maths/return-the-largest-digit-in-a-number

class Solution {
public:
	int largestDigit(int n) {
		if (n <= 9)
			return n;
		int maxDigit = 0;
		while (n) {
			if (maxDigit < n % 10)
				maxDigit = n % 10;
			n /= 10;
		}
		return maxDigit;
	}
};