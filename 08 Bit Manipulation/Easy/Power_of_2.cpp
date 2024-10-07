#include<iostream>
#include<stdio.h>
using namespace std;

bool checkPowerOf2(int num){
    if(num<=0)
        return false;

    int count = 0;
    while(num!=0){
        num = num & num-1; //Brian Kerningam's Algorithm
        count++;
    }

    if(count == 1)
        return true;
    else
        return false;
}

int main(int argc, const char** argv) {
    int num;
    char ch;
    std::cout<<"Enter a Integer: ";
    std::cin>>num;
    if(checkPowerOf2(num))
        std::cout<<"Yes, "<<num<<" is a Power of 2";
    else
        std::cout<<"No, "<<num<<" is not a Power of 2";
    getchar();
    return 0;
}