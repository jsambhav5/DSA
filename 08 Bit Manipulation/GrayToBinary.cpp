using namespace std;
#include <iostream>

int main(){
    int n=15;
    int count=-1;
    int result=n;
    for(int i=0;i<n;i++){
        if(n<(1<<i))
            break;
        count++;
    }
    cout<<count<<"\n";

    for (int i = count; i > 0; i--){
        result = result^(n>>i);
        cout<<result<<" ";
    }
    
    return 0;
}