// TUF+ :https://takeuforward.org/plus/data-structures-and-algorithm/beginner-problems/basic-arrays/sum-of-array-elements

class Solution {
public:
	int sum(int arr[], int n) {
		int sum = 0;
		for (int i = 0; i < n; i++)
			sum += arr[i];
		return sum;
		// return accumulate(arr, arr + n, 0);
	}
};