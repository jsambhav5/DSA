using namespace std;
#include <iostream>

int swapBits(int n){
    int even = n&0xAAAAAAAA;
    int odd = n&0x55555555;
    even = even>>1;
    odd = odd<<1;

    return even|odd;
}

int main() {
    cout<<swapBits(23);
    return 0;
}