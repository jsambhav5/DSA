/*
Definition of doubly linked list:
struct ListNode
{
	int val;
	ListNode *next;
	ListNode *prev;
	ListNode()
	{
		val = 0;
		next = NULL;
		prev = NULL;
	}
	ListNode(int data1)
	{
		val = data1;
		next = NULL;
		prev = NULL;
	}
	ListNode(int data1, ListNode *next1, ListNode *prev1)
	{
		val = data1;
		next = next1;
		prev = prev1;
	}
};
*/

class Solution {
public:
	ListNode* insertBeforeTail(ListNode* head, int X) {
		ListNode* itr = head;
		while (itr->next != NULL) itr = itr->next;
		ListNode* temp = new ListNode(X);
		temp->prev = itr->prev;
		temp->next = itr;
		if (itr->prev)
			itr->prev->next = temp;
		itr->prev = temp;

		if (head->prev == NULL)
			return head;
		return head->prev;
	}
};
