// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/beginner-problems/basic-maths/reverse-a-number

class Solution {
public:
	int reverseNumber(int n) {
		if (n <= 9) return n;
		int rev = 0;
		while (n) {
			rev = (rev * 10) + (n % 10);
			n /= 10;
		}
		return rev;
	}
};