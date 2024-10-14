// LeetCode : 54
// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/arrays/faqs-medium/print-the-matrix-in-spiral-manner

class Solution {
public:

	// My approach
	// vector<int> spiralOrder(vector<vector<int>>& matrix) {
	// 	vector<int> result;
	// 	int rows = matrix.size();
	// 	int cols = matrix[0].size();
	// 	for (int i = 0; i < rows / 2 && i < cols / 2; i++) {
	// 		int n = rows - (2 * i);
	// 		int m = cols - (2 * i);

	// 		for (int j = i; j < m + i; j++)
	// 			result.push_back(matrix[i][j]);

	// 		for (int j = i + 1; j < n + i; j++)
	// 			result.push_back(matrix[j][m + i - 1]);

	// 		for (int j = m + i - 2; j >= i; j--)
	// 			result.push_back(matrix[n + i - 1][j]);

	// 		for (int j = n + i - 2; j > i; j--)
	// 			result.push_back(matrix[j][i]);
	// 	}
	// 	if (cols > rows && rows % 2 != 0)
	// 		for (int i = rows / 2; i <= cols - 1 - (rows / 2); i++)
	// 			result.push_back(matrix[rows / 2][i]);

	// 	else if (rows > cols && cols % 2 != 0)
	// 		for (int i = cols / 2; i <= rows - 1 - (cols / 2); i++)
	// 			result.push_back(matrix[i][cols / 2]);

	// 	else if (rows == cols && cols % 2 != 0)
	// 		result.push_back(matrix[rows / 2][cols / 2]);

	// 	return result;
	// }

	// More Readable Solution
	vector<int> spiralOrder(vector<vector<int>>& matrix) {
		vector<int> result;

		int rows = matrix.size();
		int cols = matrix[0].size();

		int top = 0, bottom = rows - 1;
		int left = 0, right = cols - 1;

		while (top <= bottom && left <= right) {
			for (int i = left; i <= right; i++)
				result.push_back(matrix[top][i]);

			top++;

			for (int i = top; i <= bottom; i++)
				result.push_back(matrix[i][right]);

			right--;

			if (top <= bottom) {
				for (int i = right; i >= left; i--)
					result.push_back(matrix[bottom][i]);
				bottom--;
			}


			if (left <= right) {
				for (int i = bottom; i >= top; i--)
					result.push_back(matrix[i][left]);
				left++;
			}

		}

		return result;
	}
};