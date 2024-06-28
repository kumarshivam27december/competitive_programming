#include <bits/stdc++.h>
using namespace std;
class node {
public:
	int data;
	node* left;
	node* right;

	node(int val) {
		data = val;
		left = NULL;
		right = NULL;
	}

};
node* insert(node* root, int data) {
	if (root == NULL) {
		root = new node(data);
		return root;
	}

	queue<node*> q;
	q.push(root);
	while (!q.empty()) {
		node* temp = q.front();
		q.pop();
		if (temp->left == NULL) {
			temp->left = new node(data);
			break;
		} else {
			q.push(temp->left);
		}

		if (temp->right == NULL) {
			temp->right = new node(data);
			break;
		}
		else {
			q.push(temp->right);
		}
	}
	return root;
}
void inorder(node* root) {
	if (root == NULL) {
		return;
	}
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}
void findsum(node* root, int &ans) {
	if (root == NULL) {
		return;
	}
	ans += (root->data);
	findsum(root->left, ans);
	findsum(root->right, ans);
}
void inorder_loop(node* root) {

}
void preorder_loop(node* root) {

}
void postorder_loop(node* root) {

}
int sum(node* root) {
	int ans = 0;
	findsum(root, ans);
	return ans;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	node* root = NULL;
	root = insert(root, 10);
	root = insert(root, 20);
	root = insert(root, 30);
	root = insert(root, 40);
	root = insert(root, 50);
	root = insert(root, 60);

	inorder(root);
	cout << sum(root) << endl;
	return 0;
}