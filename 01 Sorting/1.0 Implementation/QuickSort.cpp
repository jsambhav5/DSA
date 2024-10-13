// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/sorting/algorithms/quick-sorting

class Solution {
private:
	void quickSortRecursive(vector<int>& nums, int low, int high) {
		if (low >= high) return;
		int pivot = partition(nums, low, high);
		quickSortRecursive(nums, low, pivot - 1);
		quickSortRecursive(nums, pivot + 1, high);
	}

	int partition(vector<int>& nums, int low, int high) {
		int pivot = nums[low];
		int i = low;
		int j = high;

		while (i < j) {
			while (nums[i] <= pivot && i <= high - 1)
				i++;

			while (nums[j] >= pivot && j >= low + 1)
				j--;

			if (i < j) swap(nums[i], nums[j]);
		}

		swap(nums[low], nums[j]);

		return j;
	}

public:
	vector<int> quickSort(vector<int>& nums) {
		quickSortRecursive(nums, 0, nums.size() - 1);
		return nums;
	}
};
