// LeetCode 2

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* result = new ListNode(0);
		ListNode* temp = result;
		int carry = 0;
		while (l1 && l2) {
			int val = l1->val + l2->val + carry;
			result->val = val % 10;
			carry = val / 10;
			l1 = l1->next;
			l2 = l2->next;

			if (l1 == NULL && l2 != NULL)
				l1 = new ListNode();

			else if (l2 == NULL && l1 != NULL)
				l2 = new ListNode();

			if (l1 || l2 || carry) {
				result->next = new ListNode(carry);
				result = result->next;
			}
		}
		return temp;
	}
};
