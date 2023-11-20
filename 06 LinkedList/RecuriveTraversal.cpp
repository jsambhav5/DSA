#include<iostream>
using namespace std;

class List{
    int data;
    
    public:
    List *next;

    List(int data){
        this->data = data;
        next = NULL;
    }

    void recursiveTravel(){
        cout<<data<<" ";

        if(next == NULL) return;

        next->recursiveTravel();       
    }

    ~List();
};

int main(){
    List *head = new List(10);
    head->next = new List(20);
    head->next->next = new List(30);
    head->recursiveTravel();
    return 0;
}