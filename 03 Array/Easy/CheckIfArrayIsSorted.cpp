// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/beginner-problems/basic-arrays/check-if-the-array-is-sorted

class Solution {
public:
	bool arraySortedOrNot(int arr[], int n) {
		if (n == 1 || n == 0)
			return true;
		for (int i = 0; i < n - 1; i++) {
			if (arr[i] > arr[i + 1])
				return false;
		}
		return true;
	}
};
