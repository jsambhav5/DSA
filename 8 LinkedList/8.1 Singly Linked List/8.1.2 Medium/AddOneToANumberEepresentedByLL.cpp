class Solution {
public:
	ListNode* reverseList(ListNode* head) {
		ListNode* prev = NULL;
		ListNode* current = head;
		ListNode* next = NULL;

		while (current != NULL) {
			next = current->next;
			current->next = prev;
			prev = current;
			current = next;
		}

		return prev;
	}

	ListNode* addOne(ListNode* head) {
		head = reverseList(head);

		ListNode* current = head;
		int carry = 1;

		while (current != NULL) {
			int sum = current->val + carry;
			carry = sum / 10;
			current->val = sum % 10;

			if (carry == 0) {
				break;
			}

			if (current->next == NULL && carry != 0) {
				current->next = new ListNode(carry);
				break;
			}

			current = current->next;
		}

		head = reverseList(head);
		return head;
	}
};
