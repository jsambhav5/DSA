#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
	void rev(vector<int>& arr, int start, int end) {
		if (start >= end) return;
		swap(arr[start++], arr[end--]);
		rev(arr, start, end);
	}
public:
	void reverseArray(vector<int>& arr) {
		rev(arr, 0, arr.size() - 1);
	}
};

int main() {
	vector<int> arr = { 1, 2, 3, 4, 5 };

	Solution ob;
	ob.reverseArray(arr);
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}