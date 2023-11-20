using namespace std;
#include <iostream>

int findMSB(int max){
    int msb=0;
    for(int i=0; max>1<<i; i++){
        msb++;
    }
    return msb;
}

int maxElement(int arr[], int N){
    int max = arr[0];

    for(int i = 1; i < N; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int maxAND (int arr[], int N)
{
    //Your code here
    bool check[N];
    for(int i = 0; i < N; i++){
        check[i] = 1;
    }

    int max = maxElement(arr, N);
    int msb = findMSB(max);
    int count = 0;
    int res=0;

    for(int i=msb; i >= 0; i--){
        count = 0;
        for(int j = 0; j < N; j++){
            if((((arr[j]>>i)&1)==1) && check[j]){
                count++;
            }
        }

        for(int j = 0; j < N; j++){
            if(count > 1 && (((arr[j]>>i)&1)==0)){
                check[j]=0;
            }
        }

        if (count > 1){
            res = res | (1<<i);
        }
    }
    return res;
}

int main() {
    int arr[] = {65536, 65536};
    cout<<maxAND(arr, sizeof(arr)/sizeof(int));
    return 0;
}
