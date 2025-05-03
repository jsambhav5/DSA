// TUF+ : Insertion at the head of LL (https://takeuforward.org/plus/dsa/linked-list/fundamentals-single-ll/insertion-at-the-head-of-ll)

/*
Topics and Learnings: Linked List, Pointer

Approach:
Used pointers to solve this

Complexity Analysis:
TC: O(1)
SC: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node* next;

	Node() {
		data = 0;
		next = nullptr;
	}

	Node(int data) {
		this->data = data;
		this->next = nullptr;
	}

	Node(int data, Node* next) {
		this->data = data;
		this->next = next;
	}
};

class LinkedList {
public:
	void insertAtHead(Node*& head, int X) {
		head = new Node(X, head);
	}

	void printList(Node* head) {
		while (head) {
			cout << head->data << " -> ";
			head = head->next;
		}
		cout << "NULL" << endl;
	}

	Node* arrToLL(vector<int>& arr) {
		Node* head = new Node(arr[0]);
		Node* tail = head;
		for (int i = 1; i < arr.size(); i++) {
			Node* temp = new Node(arr[i]);
			tail->next = temp;
			tail = temp;
		}

		return head;
	}
};

int main(int argc, const char** argv) {
	int t;
	cin >> t;

	while (t--) {
		int n, data;
		cin >> n >> data;

		vector<int> arr;
		for (int i = 0; i < n; i++) {
			int input;
			cin >> input;
			arr.push_back(input);
		}

		LinkedList ll;
		Node* head = ll.arrToLL(arr);

		ll.insertAtHead(head, data);
		ll.printList(head);
	}

	return 0;
}

/*
Test Input :
3

4 0
1 2 3 4

3 5
2 3 4

5 7
1 2 3 4 8

Test Output : 1
0 -> 1 -> 2 -> 3 -> 4 -> NULL
5 -> 2 -> 3 -> 4 -> NULL
7 -> 1 -> 2 -> 3 -> 4 -> 8 -> NULL

*/
