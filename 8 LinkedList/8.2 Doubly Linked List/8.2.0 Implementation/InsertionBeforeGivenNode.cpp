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
	void insertBeforeGivenNode(ListNode* node, int X) {
		ListNode* temp = new ListNode(X);
		temp->prev = node->prev;
		temp->next = node;
		if (node->prev) node->prev->next = temp;
		node->prev = temp;
	}
};
