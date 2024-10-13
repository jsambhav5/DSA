// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/sorting/algorithms/merge-sorting

class Solution {
private:
	void mergeSortRecursive(vector<int>& nums, int low, int high) {
		if (low >= high) return;

		int mid = (low + high) / 2;

		mergeSortRecursive(nums, low, mid);
		mergeSortRecursive(nums, mid + 1, high);

		merge(nums, low, mid, high);
	}

	void merge(vector<int>& nums, int low, int mid, int high) {
		vector<int> temp;
		int left = low;
		int right = mid + 1;

		while (left <= mid && right <= high)
			if (nums[left] <= nums[right])
				temp.push_back(nums[left++]);
			else
				temp.push_back(nums[right++]);

		while (left <= mid)
			temp.push_back(nums[left++]);

		while (right <= high)
			temp.push_back(nums[right++]);

		for (int i = low; i <= high; i++)
			nums[i] = temp[i - low];
	}

public:
	vector<int> mergeSort(vector<int>& nums) {
		mergeSortRecursive(nums, 0, nums.size() - 1);
		return nums;
	}
};
