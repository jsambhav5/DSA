/*
	Given a 32 bit unsigned integer num and an integer i
	Perform following operations on the number -
		1. Get ith bit
		2. Set ith bit
		3. Clear ith bit
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	void bitManipulation(int num, int i) {
		cout << ((num >> (i - 1)) & 1) << " ";
		cout << (num | (1 << (i - 1))) << " ";
		cout << (num & ~(1 << (i - 1)));
		// cout << ~(~num | 1 << (i - 1));
	}
};

// Driver Code Starts
int main(int argc, const char** argv) {
	int t;
	cin >> t;
	while (t--) {
		int n, i;
		cin >> n >> i;
		Solution ob;
		ob.bitManipulation(n, i);
		cout << "\n";
	}
	return 0;
}
// Driver Code Ends
