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
	ListNode* insertBeforeKthPosition(ListNode* head, int X, int K) {
		ListNode* itr = head;
		for (int i = 1; i < K; i++) itr = itr->next;
		ListNode* temp = new ListNode(X);
		if (itr->prev) {
			temp->prev = itr->prev;
			itr->prev->next = temp;
		}
		temp->next = itr;
		itr->prev = temp;
		if (head->prev)
			return head->prev;
		return head;

	}
};
