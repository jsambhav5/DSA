// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/beginner-problems/basic-maths/factorial-of-a-given-number

class Solution {
public:
	int factorial(int n) {
		if (n == 1 || n == 0)
			return 1;
		return n * factorial(n - 1);
	}
};
