#include<iostream>
#include<chrono>
using namespace std;

int countingWays(int N, int* mem) {
	if (N == 1 || N == 2)
		return N;
	if (*(mem + N - 1) != 0)
		return *(mem + N - 1);
	*(mem + N - 1) = countingWays(N - 1, mem) + countingWays(N - 2, mem);
	return countingWays(N - 1, mem) + countingWays(N - 2, mem);
}

int main(int argc, const char** argv) {
	int N;
	cin >> N;
	int mem[N] = { 0 };
	cout << countingWays(N, mem) << endl;
	return 0;
}
