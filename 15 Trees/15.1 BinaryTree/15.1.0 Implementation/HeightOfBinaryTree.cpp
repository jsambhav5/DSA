#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class BinaryTree {
public:
	TreeNode* treeBuilder() {
		int val;
		cin >> val;
		if (!val) return NULL;
		TreeNode* root = new TreeNode(val);
		root->left = treeBuilder();
		root->right = treeBuilder();
		return root;
	}

	int height(TreeNode* root) {
		if (!root) return 0;
		int leftHeight = height(root->left);
		int rightHeight = height(root->right);
		return max(leftHeight, rightHeight) + 1;
	}
};

int main(int argc, const char** argv) {
	BinaryTree t1;
	cout << t1.height(t1.treeBuilder());
	return 0;
}