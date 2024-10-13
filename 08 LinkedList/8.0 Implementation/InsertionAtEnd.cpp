#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;

    Node(){
        data = 0;
        next = NULL;
    }

    Node(int data){
        this->data = data;
        next = NULL;
    }

};

Node *reverseFirstHalf(Node *Top){
    int size = 1;
    Node *node = Top->next;
    while(node != NULL){
        size++;
        node = node->next;
    }
    Node *temp = Top;
    for(int i = 0; i < size/2; i++){
        temp = temp->next;
    }

    Node *prev = temp; 
    Node *current = Top;
    Node *next;
    for(int i = 0; i < size/2; i++){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

Node *spiralSort(Node *Top){
    int size = 1;
    Node *node = Top->next, *temp = Top, *result;
    
    while(node != NULL){
        size++;
        node = node->next;
    }

    if(size <= 1)
        return Top;

    for(int i = 0; i < size/2; i++){
        temp = temp->next;
    }

    if(size%2 == 0){
        result = Top;
        node = Top;
        Top = Top->next;
        node->next = temp;
        node = node->next;
        temp = temp ->next;
        while(temp != NULL){
            node->next = Top;
            node = node->next;
            Top = Top->next;
            node->next = temp;
            node = node->next;
            temp = temp ->next;
        }
        node->next = NULL;
    }else{
        result = temp;
        node = temp;
        while(temp->next != NULL){
            temp = temp ->next;
            node->next = Top;
            node = node->next;
            Top = Top->next;
            node->next = temp;
            node = node->next;
        }
    }
    return result;
}

int main(int argc, const char** argv) {
    int size = 6;
    Node *Top = new Node(1), *Last;

    if(size > 1){
        Last = Top;
        Top->next = Last;
    }
    
    for(int i = 2; i <= size; i++){
        Last->next = new Node(i);
        Last = Last->next;
    }
    
    Top = reverseFirstHalf(Top);
    Top = spiralSort(Top);
    Node *node = Top;
    while(node != NULL){
        cout<<node->data<<"->";
        node = node->next;
    }
    cout<<"NULL";
    return 0;
}