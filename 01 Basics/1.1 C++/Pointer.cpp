#include <iostream>
using namespace std;

int main(int argc, const char** argv) {

    int t;
    cin >> t;
    char name[] = "Sambhav Jain";
    char* a = name;
    cout << t << "\n";
    cout << name << "\n";
    cout << a << "\n";
    cout << *a << "\n";
    cout << endl;

    int x = *a;
    cout << x << "\n";
    cout << int(*a) << "\n";
    cout << endl;

    int z[] = { 10,11,12,14 };
    int* y = z;
    cout << z << "\n";
    cout << y << "\n";
    cout << *y << "\n";
    cout << sizeof(z) << "\t" << sizeof(y);
    cout << endl;

    return 0;
}