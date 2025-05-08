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
	ListNode* deleteKthNode(ListNode*& head, int k) {
		if (head == NULL)
			return NULL;

		if (k == 1) {
			ListNode* temp = head;
			head = head->next;
			delete temp;
			return head;
		}

		ListNode* temp = head;

		for (int i = 0; temp != NULL && i < k - 2; i++) {
			temp = temp->next;
		}

		if (temp == NULL || temp->next == NULL)
			return head;

		ListNode* next = temp->next->next;
		delete temp->next;
		temp->next = next;

		return head;
	}
};
