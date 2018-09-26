//
//# include <iostream>
//#include <cstdlib>
//using namespace std;
//struct node {
//int info;
//struct node *left;
//struct node *right;
//}*root;
//class BST {
//public:
//void insert(node *, node *);
//void inorder(node *);
//void Preorder(node *);
//void Postorder(node *);
//void display(node *, int);
//BST() {
//root = NULL;
//}
//};
//
//int main() {
//int choice;
//BST bst;
//node *temp;
//while (1) {
//cout << "-----------------" << endl;
//cout << "Operations on BST" << endl;
//cout << "-----------------" << endl;
//cout << "1.Insert Element " << endl;
//cout << "2.Inorder Traversal" << endl;
//cout << "3.Preorder Traversal" << endl;
//cout << "4.Postorder Traversal" << endl;
//cout << "5.Display" << endl;
//cout << "6.Quit" << endl;
//cout << "Enter your choice : ";
//cin >> choice;
//switch (choice) {
//case 1:
//temp = new node;
//cout << "Enter the number to be inserted : ";
//cin >> temp->info;
//bst.insert(root, temp);
//break;
//case 2:
//cout << "Inorder Traversal of BST:" << endl;
//bst.inorder(root);
//cout << endl;
//break;
//case 3:
//cout << "Preorder Traversal of BST:" << endl;
//bst.Preorder(root);
//cout << endl;
//break;
//case 4:
//cout << "Postorder Traversal of BST:" << endl;
//bst.Postorder(root);
//cout << endl;
//break;
//case 5:
//cout << "Display BST:" << endl;
//bst.display(root, 1);
//cout << endl;
//break;
//case 6:
//exit(1);
//default:
//cout << "Wrong choice" << endl;
//}
//}
//}
//
///*
//* Inserting Element into the Tree
//*/
//void BST::insert(node *tree, node *newnode) {
//	if (root == NULL) {
//		root = new node;
//		root->info = newnode->info;
//		root->left = NULL;
//		root->right = NULL;
//		cout << "Root Node is Added" << endl;
//		return;
//	}
//	if (tree->info == newnode->info) {
//		cout << "Element already in the tree" << endl;
//		return;
//	}
//	if (tree->info > newnode->info) {
//		if (tree->left != NULL) {
//			insert(tree->left, newnode);
//		}
//		else {
//			tree->left = newnode;
//			(tree->left)->left = NULL;
//			(tree->left)->right = NULL;
//			cout << "Node Added To Left" << endl;
//			return;
//		}
//	}
//	else {
//		if (tree->right != NULL) {
//			insert(tree->right, newnode);
//		}
//		else {
//			tree->right = newnode;
//			(tree->right)->left = NULL;
//			(tree->right)->right = NULL;
//			cout << "Node Added To Right" << endl;
//			return;
//		}
//	}
//}
//
//void BST::inorder(node *ptr) {
//	if (root == NULL) {
//		cout << "Tree is empty" << endl;
//		return;
//	}
//	if (ptr != NULL) {
//		inorder(ptr->left);
//		cout << ptr->info << "  ";
//		inorder(ptr->right);
//	}
//}
//void BST::Preorder(node *ptr) {
//
//	if (root == NULL) {
//		cout << "Tree is Empty" << endl;
//		return;
//	}
//	if (ptr != NULL) {
//		cout << ptr->info << "  ";
//		Preorder(ptr->left);     // Visit left subtree
//		Preorder(ptr->right);    // Visit right subtree
//	}
//}
//
//void BST::Postorder(node *ptr) {
//	if (root == NULL) {
//		cout << "Tree is Empty" << endl;
//		return;
//	}
//	if (ptr != NULL) {
//		Postorder(ptr->left);    // Visit left subtree
//		Postorder(ptr->right);   // Visit right subtree
//		cout << ptr->info << "  ";
//
//	}
//
//}
//
///*
//* Display Tree Structure
//*/
//void BST::display(node *ptr, int level) {
//	int i;
//	if (ptr != NULL) {
//		display(ptr->right, level + 1);
//		cout << endl;
//		if (ptr == root)
//			cout << "Root->:  ";
//		else {
//			for (i = 0; i < level; i++)
//				cout << "       ";
//		}
//		cout << ptr->info;
//		display(ptr->left, level + 1);
//	}
//}
//
//
//
//
