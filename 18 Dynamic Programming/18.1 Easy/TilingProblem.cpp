#include<iostream>
#include<chrono>
using namespace std;
using namespace std::chrono;

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
	auto start = high_resolution_clock::now();
	cout << countingWays(N, mem) << endl;
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << duration.count() << " microseconds" << endl;
	return 0;
}
