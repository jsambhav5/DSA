// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/beginner-problems/basic-hashing/sum-of-highest-and-lowest-frequency

class Solution {
public:
	int sumHighestAndLowestFrequency(vector<int>& nums) {
		int n = nums.size();
		int minFreq = n, maxFreq = 0;
		unordered_map<int, int> freqMap;

		for (int i = 0; i < n; i++)
			freqMap[nums[i]]++;

		for (auto i : freqMap) {
			int freq = i.second;
			maxFreq = max(maxFreq, freq);
			minFreq = min(minFreq, freq);
		}

		return minFreq + maxFreq;
	}
};
