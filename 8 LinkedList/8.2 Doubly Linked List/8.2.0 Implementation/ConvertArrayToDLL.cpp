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
	ListNode* arrayToLinkedList(vector<int>& nums) {
		if (nums.size() == 0) return NULL;
		ListNode* head = new ListNode(nums[0]);
		ListNode* itr = head;
		ListNode* prev = head;
		for (int i = 1; i < nums.size(); i++) {
			itr->next = new ListNode(nums[i]);
			prev = itr;
			itr = itr->next;
			itr->prev = prev;
		}
		return head;
	}
};
