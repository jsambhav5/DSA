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
    ListNode* deleteTail(ListNode* &head) {
        if(head == nullptr || head->next == nullptr)
            return nullptr;
        ListNode* temp = head;
        while(temp->next->next != nullptr)
            temp = temp->next;
        temp->next = temp->next->next;

        return head;
    }
};
