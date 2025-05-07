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
	ListNode* deleteNodeWithValueX(ListNode*& head, int X) {
		if (head->val == X) {
			head = head->next;
			return head;
		}
		ListNode* itr = head;
		while (itr) {
			if (itr->next && itr->next->val == X) {
				itr->next = itr->next->next;
				return head;
			}
			itr = itr->next;
		}
		return head;
	}
};
