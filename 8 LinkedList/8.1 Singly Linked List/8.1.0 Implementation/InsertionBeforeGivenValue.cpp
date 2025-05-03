// TUF+ : Insertion before the value X in LL (https://takeuforward.org/plus/dsa/linked-list/fundamentals-single-ll/insertion-before-the-value-x-in-ll)

/*
Topics and Learnings: Linked List, Pointer

Approach:
Used pointers to solve this

Complexity Analysis:
TC: O(N)
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
	void insertBeforeValue(Node*& head, int data, int value) {
		if (head->data == value){
			head = new Node(data, head);
			return;
		}
		Node* itr = head;
		while (itr->next && itr->next->data != value)
			itr = itr->next;
		if (itr->next == NULL) return;
		itr->next = new Node(data, itr->next);
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
		int n, data, value;
		cin >> n >> data >> value;

		vector<int> arr;
		for (int i = 0; i < n; i++) {
			int input;
			cin >> input;
			arr.push_back(input);
		}

		LinkedList ll;
		Node* head = ll.arrToLL(arr);

		ll.insertBeforeValue(head, data, value);
		ll.printList(head);
	}

	return 0;
}

/*
Test Input :
4

4 0 3
1 2 3 4

3 5 4
2 3 4

5 7 4
1 2 3 4 8

3 5 7
1 2 3

Test Output :
1 -> 2 -> 0 -> 3 -> 4 -> NULL
2 -> 3 -> 5 -> 4 -> NULL
1 -> 2 -> 3 -> 7 -> 4 -> 8 -> NULL
1 -> 2 -> 3 -> NULL

*/
