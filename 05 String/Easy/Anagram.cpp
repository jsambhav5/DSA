/*
    Function taking two strings as inputs
    and returning 1 if both are anagram
    and returning 0 if both are not anagram

    Time Complexity: O(n)
    Auxillary Space Complexity: O(1)

    Note:
    Anagram - Two strings made with different combination
    of same set of elements
*/

#include <iostream>
using namespace std;

int isAnagram(char *s1, char *s2){
    int count[256];
    
    for (int i = 0; i < 256; i++)
        count[i] = 0;

    for (int i = 0; s1[i] != '\0'; i++)
        count[s1[i]]++;

    for (int i = 0; s2[i] != '\0'; i++)
        count[s2[i]]--;

    for (int i = 0; i < 256; i++)
        if (count[i] != 0)
            return 1;

    return 0;
}

int main(int argc, const char** argv) {
    char s1[100] = "sambhav jain";
    char s2[100] = "asmbhav jain";
    
    if (isAnagram(s1, s2) == 1)
        cout<<"Given Strings are Anagrams";

    else
        cout<<"Given Strings are not Anagrams";

    return 0;
}