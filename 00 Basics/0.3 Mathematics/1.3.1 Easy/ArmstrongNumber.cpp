// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/beginner-problems/basic-maths/check-if-the-number-if-armstrong

class Solution {
public:
	bool isArmstrong(int n) {
		int temp = n;
		int sum = 0;
		while (n) {
			sum += pow(n % 10, 3);
			n /= 10;
		}
		return sum == temp;
	}
};