// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/arrays/logic-building/intersection-of-two-sorted-arrays

class Solution {
public:
	vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
		vector<int> arr;
		int i = 0, j = 0;
		while (i < nums1.size() && j < nums2.size()) {
			if (nums1[i] < nums2[j]) i++;
			else if (nums1[i] > nums2[j]) j++;
			else {
				arr.push_back(nums2[j]);
				i++;
				j++;
			}
		}

		return arr;
	}
};