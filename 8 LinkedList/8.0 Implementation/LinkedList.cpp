#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node {
	int data;
	Node* next;

	Node() {
		data = 0;
		next = NULL;
	}

	Node(int data) {
		this->data = data;
		next = NULL;
	}
};

void show(Node* node) {
	if (node == NULL) {
		cout << "Empty List\n";
		system("pause");
		return;
	}

	cout << "\nList:\n";
	while (node != NULL) {
		cout << node->data << endl;
		node = node->next;
	}
	system("pause");
}

void push(Node*& head, Node*& tail, int data) {
	Node* temp = new Node(data);

	if (head == NULL) {
		temp->next = NULL;
		tail = temp;
	}
	else
		temp->next = head;

	head = temp;
}

void append(Node*& tail, Node*& head, int data) {
	Node* temp = new Node(data);

	if (tail == NULL) {
		temp->next = NULL;
		head = temp;
	}
	else
		tail->next = temp;

	tail = temp;
}

void find(Node* node, int element) {
	if (node == NULL) {
		cout << "Empty List\n";
		system("pause");
		return;
	}

	int i = 0;
	while (node != NULL) {
		if (node->data == element) {
			cout << "Element is at Index: " << i << endl;
			system("pause");
			return;
		}
		node = node->next;
		i++;
	}

	cout << "Element Not Found\n";
	system("pause");
}

void remove(Node*& head, int index) {
	if (head == NULL) {
		cout << "Empty List\n";
		system("pause");
		return;
	}

	if (index == 0) {
		head = NULL;
		return;
	}

	Node* node = head;

	for (int i = 1; i < index; i++) {
		if (node->next->next == NULL) {
			cout << "Index doesn't Exist\n";
			system("pause");
			return;
		}

		node = node->next;
	}

	node->next = node->next->next;
	system("pause");
}

void options() {
	system("cls");
	cout << "Please Select the Operation:" << endl;
	cout << "1. Display" << endl;
	cout << "2. Insert at Head" << endl;
	cout << "3. Insert at Tail" << endl;
	cout << "4. Search an Element" << endl;
	cout << "5. Delete an Element" << endl;
	cout << "0. Exit" << endl;
}

int main(int argc, char const* argv[]) {
	Node* head, * tail;
	head = NULL, tail = NULL;
	int data;

	char choice;

	while (1) {
		options();
		cin >> choice;

		switch (choice) {
			case '0':
				cout << "\nThank You!\n";
				return 0;

			case '1':
				show(head);
				break;

			case '2':
				cout << "Enter the Number: ";
				cin >> data;
				push(head, tail, data);
				break;

			case '3':
				cout << "Enter the Number: ";
				cin >> data;
				append(tail, head, data);
				break;

			case '4':
				cout << "Enter the Element: ";
				cin >> data;
				find(head, data);
				break;

			case '5':
				cout << "Enter the Index: ";
				cin >> data;
				remove(head, data);
				break;

			default:
				break;
		}
	}
	return 0;
}

