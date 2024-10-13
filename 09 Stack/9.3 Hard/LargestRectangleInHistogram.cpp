#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int largestRectangleArea(vector<int>& heights) {
		stack<int> stack;
		int result = 0;
		int n = heights.size();

		for (int i = 0; i < n; i++) {
			if (stack.empty() || heights[i] >= heights[stack.top()])
				stack.push(i);
			else {
				stack.pop();

				result = max(result, heights[i - 1] * (i - stack.top() - 1));
			}
		}
		while (!stack.empty()) {
			result = max(result, heights[n - 1] * (n - stack.top()));
			stack.pop();
		}
		return result;
	}
};

int main(int argc, const char** argv) {
	vector<int> heights = { 1, 2, 3, 2, 1, 3, 1 };
	Solution s;
	cout << s.largestRectangleArea(heights);
	return 0;
}