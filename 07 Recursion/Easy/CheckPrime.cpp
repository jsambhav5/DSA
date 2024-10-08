// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/beginner-problems/basic-recursion/check-if-a-number-is-prime-or-not

class Solution {
	bool isPrime(int num, int i) {
		if (num <= 1)
			return false;
		if (i * i > num)
			return true;
		if (num % i == 0)
			return false;
		return isPrime(num, i + 1);
	}
public:
	bool checkPrime(int num) {
		return isPrime(num, 2);
	}
};