// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/arrays/logic-building/union-of-two-sorted-arrays

class Solution {
public:
	vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
		vector<int> arr;
		int i = 0, j = 0;
		while (i < nums1.size() && j < nums2.size()) {
			if (nums1[i] <= nums2[j]) {
				if (arr.size() == 0 || nums1[i] != arr.back())
					arr.push_back(nums1[i]);
				i++;
			}
			else {
				if (arr.size() == 0 || nums2[j] != arr.back())
					arr.push_back(nums2[j]);
				j++;
			}
		}

		while (i < nums1.size()) {
			if (nums1[i] != arr.back())
				arr.push_back(nums1[i]);
			i++;
		}

		while (j < nums2.size()) {
			if (nums2[j] != arr.back())
				arr.push_back(nums2[j]);
			j++;
		}

		return arr;
	}
};