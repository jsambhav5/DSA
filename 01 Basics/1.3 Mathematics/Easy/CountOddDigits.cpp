// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/beginner-problems/basic-maths/count-number-of-odd-digits-in-a-number

class Solution {
public:
	int countOddDigit(int n) {
		int count = 0;
		while (n) {
			if ((n % 10) % 2 == 1)
				count++;
			n /= 10;
		}
		return count;
	}
};