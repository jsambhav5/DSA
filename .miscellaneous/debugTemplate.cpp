int main(int argc, const char** argv) {
	vector<int> arr = { 4, 5, 6, 7, 0, 1, 2 };
	int target = 0;

	Solution sol;

	vector<int> ans = sol.FUNCTION(arr);

	for (auto i : ans) {
		cout << i << " ";
	}
	return 0;
}
