// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/beginner-problems/basic-recursion/reverse-an-array

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
	void rev(vector<int>& arr, int start, int end) {
		if (start < end) {
			swap(arr[start], arr[end]);
			rev(arr, start + 1, end - 1);
		}
	}
public:
	vector<int> reverseArray(vector<int>& nums) {
		rev(nums, 0, nums.size() - 1);
		return nums;
	}
};

int main(int argc, const char** argv) {
	vector<int> arr = { 1, 2, 3, 4, 5 };

	Solution ob;
	ob.reverseArray(arr);
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
