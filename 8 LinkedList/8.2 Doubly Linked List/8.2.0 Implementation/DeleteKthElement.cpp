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
	ListNode* deleteKthElement(ListNode* head, int k) {
		ListNode* itr = head;
		if (k == 1) {
			if (head->next) {
				head->next->prev = NULL;
				head = head->next;
				delete itr;
				return head;
			}
			return NULL;
		}
		for (int i = 1; i < k - 1; i++)
			itr = itr->next;

		ListNode* temp = itr->next;
		if (itr->next->next) {
			itr->next->next->prev = itr;
			itr->next = itr->next->next;
		}
		else itr->next = NULL;
		delete temp;
		return head;
	}
};
