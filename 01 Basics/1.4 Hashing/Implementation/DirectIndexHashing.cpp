#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;

void insertion(bool directIndexTable[], LL lower, LL upper){
    while(true){
        
        LL index;
        cout<<"Enter the Value to Insert: ";
        cin>>index;
        
        if(index < lower || index > upper)
            return;
        
        directIndexTable[index-lower] = 1;
    }
}

void deletion(bool directIndexTable[], LL lower, LL upper){
    while(true){
        
        LL index;
        cout<<"Enter the Value to Delete: ";
        cin>>index;
        
        if(index < lower || index > upper)
            return;
        
        directIndexTable[index-lower] = 0;
    }
}

void search(bool directIndexTable[], LL lower, LL upper){
    while(true){
        
        LL index;
        cout<<"Enter the Value to Search: ";
        cin>>index;
        
        if(index < lower || index > upper)
            return;
        
        if(directIndexTable[index-lower] == 1)
            cout<<"Element Present\n";
        else
            cout<<"Element Not Present\n";

    }
}

int main() {
    LL lower, upper;
    
    cout<<"Enter Lower Limit: ";
    cin>>lower;
    cout<<"Enter Upper Limit: ";
    cin>>upper;
    
    LL size = upper - lower + 1;
    bool directIndexTable[size];

    for(LL i = 0; i < size; i++)
        directIndexTable[i] = 0;

    insertion(directIndexTable, lower, upper);
    deletion(directIndexTable, lower, upper);
    search(directIndexTable, lower, upper);

    return 0;    
}