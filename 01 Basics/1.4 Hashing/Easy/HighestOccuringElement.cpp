// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/beginner-problems/basic-hashing/highest-occurring-element-in-an-array

class Solution {
public:
	int mostFrequentElement(vector<int>& nums) {
		map<int, int> freq;
		int n = nums.size(), maxFreq = 0, freqEle;
		for (int i = 0; i < n; i++) {
			freq[nums[i]]++;
		}
		for (auto i : freq) {
			if (i.second > maxFreq) {
				maxFreq = i.second;
				freqEle = i.first;
			}
		}
		return freqEle;
	}
};