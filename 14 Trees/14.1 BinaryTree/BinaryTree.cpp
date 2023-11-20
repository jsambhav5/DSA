#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class BinaryTree {
	int data;
	BinaryTree* left;
	BinaryTree* right;

public:
	BinaryTree(int data) {
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}

	void setLeft(BinaryTree* left) {
		this->left = left;
	}

	void setRight(BinaryTree* right) {
		this->right = right;
	}

	void preOrderTraverse() {
		cout << this->data;
		if (this->left)
			this->left->preOrderTraverse();
		if (this->right)
			this->right->preOrderTraverse();
	}

	void inOrderTraverse() {
		if (this->left)
			this->left->inOrderTraverse();
		cout << this->data;
		if (this->right)
			this->right->inOrderTraverse();
	}

	void postOrderTraverse() {
		if (this->left)
			this->left->postOrderTraverse();
		if (this->right)
			this->right->postOrderTraverse();
		cout << this->data;
	}
};

int main(int argc, const char** argv) {
	BinaryTree t1(1), t2(2), t3(3), t4(4), t5(5);
	t1.setLeft(&t2);
	t1.setRight(&t3);
	t2.setLeft(&t4);
	t2.setRight(&t5);
	t1.preOrderTraverse();
	cout << endl;
	t1.inOrderTraverse();
	cout << endl;
	t1.postOrderTraverse();
	return 0;
}