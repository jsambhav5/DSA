// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/beginner-problems/basic-arrays/reverse-an-array/submissions

class Solution {
public:
	int countOdd(int arr[], int n) {
		int count = 0;
		for (int i = 0; i < n; i++)
			if (arr[i] & 1)
				count++;
		return count;
	}
};