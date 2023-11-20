#include<bits/stdc++.h>
using namespace std;

int main(int argc, const char** argv) {
	stack<int> stack;
	int result = 0;
	int arr[] = { 1, 2, 3, 2, 1, 3, 1 };
	int n = sizeof(arr) / sizeof(int);

	for (int i = 0; i < n; i++) {
		if (stack.empty() || arr[i] >= arr[stack.top()])
			stack.push(i);
		else {
			stack.pop();

			result = result > arr[i - 1] * (i - stack.top() - 1) ? result : arr[i - 1] * (i - stack.top() - 1);
		}
	}
	while (!stack.empty()) {
		result = result > arr[n - 1] * (n - stack.top()) ? result : arr[n - 1] * (n - stack.top());
		stack.pop();
	}
	cout << result;
	return 0;
}