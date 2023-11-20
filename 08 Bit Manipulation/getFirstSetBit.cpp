#include <iostream>
using namespace std;


unsigned int getFirstSetBit(int n){
	int temp = (n&(n-1))^n;
	//temp = n;
	int count = 1;
	while (temp > 0){
		if(temp&1==1)	
		return count;
		count++;
		temp = temp>>1;
	}
	return 0;
}

int main(){
    std::cout<<getFirstSetBit(12);
}