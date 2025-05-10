/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};
*/ 

class Solution {
public:
    ListNode* deleteHead(ListNode* &head) {
        if(head == nullptr || head->next == nullptr)
            return nullptr;
        head->val = head->next->val;
        head->next = head->next->next;
        return head;
    }
};
