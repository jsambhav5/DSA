// TUF+ https://takeuforward.org/plus/data-structures-and-algorithm/beginner-problems/basic-hashing/second-highest-occurring-element

class Solution {
public:
	int secondMostFrequentElement(vector<int>& nums) {
		int n = nums.size();

		int maxFreq = 0, secMaxFreq = 0;
		int freqEle = -1, secFreqEle = -1;

		unordered_map<int, int> freqArr;

		for (int i = 0; i < n; i++) {
			freqArr[nums[i]]++;
		}

		for (auto i : freqArr) {
			int ele = i.first;
			int freq = i.second;

			if (freq > maxFreq) {
				secMaxFreq = maxFreq;
				maxFreq = freq;
				secFreqEle = freqEle;
				freqEle = ele;
			}

			else if (freq == maxFreq) {
				freqEle = min(freqEle, ele);
			}

			else if (freq > secMaxFreq) {
				secMaxFreq = freq;
				secFreqEle = ele;
			}

			else if (freq == secMaxFreq) {
				secFreqEle = min(secFreqEle, ele);
			}
		}
		return secFreqEle;
	}
};