// LeetCode : 162 - Find Peak Element (https://leetcode.com/problems/find-peak-element/description/)
// TUF+ : Find peak element (https://takeuforward.org/plus/data-structures-and-algorithm/binary-search/faqs/find-peak-element)

/*
Approach:
Used Binary Search to solve this

TC: O(logN)
SC: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int n = arr.size();

        if (n == 1) return 0;
        if (arr[0] > arr[1]) return 0;
        if (arr[n - 1] > arr[n - 2]) return n - 1;

        int low = 1, high = n - 2;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
                return mid;

            if (arr[mid] > arr[mid - 1])
                low = mid + 1;

            else
                high = mid - 1;
        }

        return -1;
    }
};

/*
Test Input : 
3

10
1 2 3 4 5 6 7 8 5 1

7
1 2 1 3 4 6 4

5
-2 -1 3 4 5

Test Output : 1
7
1
4

*/ 