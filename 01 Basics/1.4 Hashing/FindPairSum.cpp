#include <unordered_set>
#include <vector>
#include <iostream>
using namespace std;

bool findPairSum(const vector <int> data, int target){
    unordered_set <int> comp;
    for (int value : data){
        if (comp.find(value) != comp.end())
            return true;
        comp.insert(target - value);
    }
    return false;
}

int main(int argc, const char** argv) {
    cout<<findPairSum({1, 2, 3, 4, 7}, 8);
    return 0;
}
