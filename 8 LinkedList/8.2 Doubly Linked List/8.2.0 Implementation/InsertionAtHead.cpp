// TUF+ : Insert node before head in DLL (https://takeuforward.org/plus/dsa/linked-list/fundamentals-doubly-ll/insert-node-before-head-in-dll)

/*
Topics and Learnings: Doubly Linked List, Linked List, Pointer

Approach:
Used pointers to solve this

Complexity Analysis:
TC: O(1)
SC: O(1)
*/

#include <bits/stdc++.h>
using namespace std;


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

class DoublyLinkedList {
public:
	ListNode* insertBeforeHead(ListNode* head, int X) {
		ListNode* newNode = new ListNode(X, head, nullptr);
		head->prev = newNode;
		return newNode;
	}
};

int main(int argc, const char** argv) {
	int t;
	cin >> t;

	while (t--) {
		int n, data, pos;
		cin >> n >> data >> pos;

		vector<int> arr;
		for (int i = 0; i < n; i++) {
			int input;
			cin >> input;
			arr.push_back(input);
		}

		DoublyLinkedList ll;
		ListNode* head = ll.arrToLL(arr);

		ll.insertAtHead(head, data, pos);
		ll.printList(head);
	}

	return 0;
}

/*
Test Input :
3

4 0 2
1 2 3 4

3 5 2
2 3 4

5 7 1
1 2 3 4 8

Test Output : 1
1 -> 0 -> 2 -> 3 -> 4 -> NULL
2 -> 5 -> 3 -> 4 -> NULL
7 -> 1 -> 2 -> 3 -> 4 -> 8 -> NULL

*/
