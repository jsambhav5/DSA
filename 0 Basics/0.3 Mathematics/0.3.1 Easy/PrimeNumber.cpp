// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/beginner-problems/basic-maths/check-for-prime-number

#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int num) {
	if (num < 2)
		return false;

	for (int i = 2; i < sqrt(num); i++) {
		if (num % i == 0)
			return false;
	}

	return true;
}

int main(int argc, const char** argv) {
	int num;
	cout << "Enter the Number: ";
	cin >> num;

	if (isPrime(num))
		cout << num << " is a Prime Number";
	else
		cout << num << " is not a Prime Number";

	return 0;
}
