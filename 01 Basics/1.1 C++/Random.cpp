/*
    Program to print random numbers from an array
    such that no number is repeated,
    until every number is printed once
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Swapping the used Number to the last
int swap(int arr[], int pos, int &size){
    
    if(pos != size - 1){
        arr[pos] = arr[size - 1] + arr[pos];
        arr[size - 1] = arr[pos] - arr[size - 1];
        arr[pos] = arr[pos] - arr[size - 1];
    }
    size--; //Reducing size to avoid printing used number
    
    return 0;
}

//Printing random numbers from array
int random(int arr[], int size){
    srand(time(0)); //To iniatialise the pseudo random function
    
    for(int i = 0; i < size;){
        int temp = rand() % size;
        cout<<arr[temp]<<"\n";
        swap(arr, temp, size);
    }

    return 0;
}

int main(int argc, const char** argv) {
    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    int iteration = 5;

    for(int j = 0; j < iteration; j++){
        cout<<"\n\nSet "<<j+1<<":\n\n";
        int size = sizeof(arr)/sizeof(int);
        random(arr, size);
    }    

    return 0;
}
