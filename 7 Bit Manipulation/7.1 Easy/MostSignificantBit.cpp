using namespace std;
#include <iostream>

int mostSignificantBit(int n) {
	int count = 0;
	for (int i = 0;n > (1 << i);i++) {
		count++;
	}
	return count;
}

int main(int argc, const char** argv) {
	cout << mostSignificantBit(16);
	return 0;
}
