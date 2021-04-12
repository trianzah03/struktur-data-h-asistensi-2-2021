#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node *left, *right;
	Node(int data) {
		this -> data = data;
		left = right = NULL;
		}
	
};
void preorderTraversal (struct Node* node) { //untuk Preorder
	if (node == NULL)
	return;
	cout << node -> data << "->";
	preorderTraversal (node -> left);
	preorderTraversal (node -> right);	
}
void postorderTraversal (struct Node* node) { //untuk Postorder
	if (node == NULL)
	return;
	postorderTraversal (node -> left);
	postorderTraversal (node -> right);
	cout << node -> data << "->";
}
void inorderTraversal (struct Node* node) { //untuk Inorder
	if (node == NULL)
	return;
	inorderTraversal (node -> left);
	cout << node -> data << "->";
	inorderTraversal (node -> right);
}
int main() {
  struct Node* root = new Node(5);
  root->left = new Node(4);
  root->right = new Node(6);
  root->left->left = new Node(3);
  root->left->right = new Node(2);

  cout << "Inorder traversal ";
  inorderTraversal(root);

  cout << "\nPreorder traversal ";
  preorderTraversal(root);

  cout << "\nPostorder traversal ";
  postorderTraversal(root);
}
