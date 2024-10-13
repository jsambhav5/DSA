// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/beginner-problems/basic-recursion/fibonacci-number

class Solution {
private:
public:
	int fib(int n) {
		if (n == 1 || n == 0) return n;
		return fib(n - 1) + fib(n - 2);
	}
};