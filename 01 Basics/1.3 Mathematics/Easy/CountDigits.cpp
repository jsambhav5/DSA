// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/beginner-problems/basic-maths/count-all-digits-of-a-number

class Solution {
public:
	int countDigit(int n) {
		if (n == 0)
			return 1;
		int count = 0;
		while (n) {
			count++;
			n /= 10;
		}
		return count;
	}
};