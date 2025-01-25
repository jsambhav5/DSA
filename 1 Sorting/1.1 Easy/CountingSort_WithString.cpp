/*
	Function taking a string as input,
	Sorting the String with Counting Sort
	and Returning Sorted String as output

	Time Complexity: O(n)
	Auxillary Space Complexity: O(1)
*/

#include <iostream>
#include<string.h>
using namespace std;

char* countingSort(char name[], int len) {
	int count[256], i;
	char sorted[100], * result;

	for (i = 0; i < 256; i++)
		count[i] = 0;

	for (i = 0; name[i] != '\0'; i++)
		count[int(name[i])]++;

	for (i = 1; i < 256; i++)
		count[i] = count[i] + count[i - 1];

	for (i = len; i >= 0; i--) {
		sorted[count[int(name[i])] - 1] = name[i];
		count[int(name[i])] = count[int(name[i])] - 1;
	}

	result = sorted;
	return result;
}

int main(int argc, const char** argv) {
	char name[] = "Sambhav Jain is a Good Boy";
	char* output = countingSort(name, strlen(name));
	cout << output;
	return 0;
}
