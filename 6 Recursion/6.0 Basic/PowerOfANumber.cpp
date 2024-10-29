class Solution {
public:
	double myPow(double x, int n) {
		if (n < 0)
			return myPow(x, n + 1) / x;

		if (n > 0)
			return myPow(x, n - 1) * x;

		return 1;
	}
};