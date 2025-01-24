// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/beginner-problems/basic-maths/gcd-of-two-numbers

class Solution {
public:
	int GCD(int n1, int n2) {
		// int gcd;
		// for(int i = min(n1, n2); i >= 1; i--) 
		//     if(n1 % i == 0 && n2 % i == 0) {
		//         gcd = i;
		//         break;
		//     }
		// return gcd;

		if (n1 == 0 || n1 == n2) return n2;
		int max_ = max(n1, n2);
		int min_ = min(n1, n2);
		return GCD(max_ % min_, min_);
	}
};