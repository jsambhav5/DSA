// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/beginner-problems/basic-arrays/reverse-an-array/submissions

class Solution {
public:
	void reverse(int arr[], int n) {
		int i = 0, j = n - 1, temp;
		while (i < j) {
			swap(arr[i++], arr[j--]);
		}
	}
};
