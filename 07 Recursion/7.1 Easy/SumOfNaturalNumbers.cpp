// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/beginner-problems/basic-recursion/sum-of-first-n-numbers

class Solution {
public:
	int NnumbersSum(int N) {
		if (N == 1) return 1;
		return N + NnumbersSum(N - 1);
	}
};