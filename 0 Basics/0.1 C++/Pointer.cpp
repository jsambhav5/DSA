#include <iostream>
using namespace std;

int main(int argc, const char** argv) {

	int t;
	cin >> t; // 3
	char name[] = "Sambhav Jain";
	char* a = name;
	cout << t << "\n";  // 3
	cout << name << "\n"; // Sambhav Jain
	cout << a << "\n";  // Sambhav Jain
	cout << *a << "\n"; // S
	cout << endl;

	int x = *a;
	cout << x << "\n"; // 83
	cout << int(*a) << "\n"; // 83
	cout << endl;

	int z[] = { 10,11,12,14 };
	int* y = z;
	cout << z << "\n"; // 0x61fee0
	cout << y << "\n"; // 0x61fee0
	cout << *y << "\n"; // 10
	cout << sizeof(z) << "\t" << sizeof(y); // 16 4
	cout << endl;

	return 0;
}

/*
OUTPUT:
3
Sambhav Jain
Sambhav Jain
S

83
83

0x61fee0
0x61fee0
10
16	4

*/
