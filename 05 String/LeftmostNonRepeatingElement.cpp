/*
    Function Returning Index of Leftmost Element
    that comes exactly once in the string
    If no such Element available: Return -1

    Time Complexity: O(n)
    Auxillary Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int leftmostRepeatingElement(char *string){
    int count[256];

    for (int i = 0; i < 256; i++)
        count[i] = 0;

    for (int i = 0; string[i] != '\0'; i++)
        count[string[i]]++;

    for (int i = 0; string[i] != '\0'; i++)
        if (count[string[i]] == 1)
            return i;

    return -1;
}

int main(int argc, const char** argv) {
    char string[100] = "Sambhav Jain";
    int answer = leftmostRepeatingElement(string);

    if (answer == -1)
        cout<<"No Such Element Available";

    else
        cout<<"Answer: "<<string[answer];

    return 0;
}
