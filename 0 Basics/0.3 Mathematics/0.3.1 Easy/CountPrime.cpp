// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/beginner-problems/basic-maths/count-of-prime-numbers-till-n

class Solution {
public:
	bool isPrime(int n) {
		if (n == 2) return true;
		if (n < 2) return false;
		if (!(n & 1)) return false;
		for (int i = 2; i <= sqrt(n); i++)
			if (n % i == 0)
				return false;
		return true;
	}

	int primeUptoN(int n) {
		int count = 0;
		for (int i = 2; i <= n; i++)
			if (isPrime(i))
				count++;
		return count;
	}
};