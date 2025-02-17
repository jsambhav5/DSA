#include <iostream>
using namespace std;

unsigned int getFirstSetBit(int n) {
	int count = 0;
	while (n > 0) {
		if (n & 1)
			return count;
		count++;
		n = n >> 1;
	}
	return -1;
}

int main(int argc, const char** argv) {
	int num;
	cin >> num;
	int result = getFirstSetBit(num);
	cout << result;
}
