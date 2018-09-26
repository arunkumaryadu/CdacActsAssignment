//# include <iostream>
//#include <cstdlib>
//using namespace std;
//struct node {
//	int info;
//	struct node *left;
//	struct node *right;
//}*root;
//class BST {
//public:
//	void insert(node *, node *);
//	void inorder(node *);
//	void Preorder(node *);
//	void Postorder(node *);
//	node* FindMin(node*);
//	node* FindMax(node*);
//	node* Delete(node *, int);
//	void DeleteMin(node*);
//	void DeleteMax(node*);
//	void display(node *, int);
//	BST() {
//		root = NULL;
//	}
//};
//
//int main() {
//	int choice;
//	BST bst;
//	node *temp;
//	while (1) {
//		cout << "-----------------" << endl;
//		cout << "Operations on BST" << endl;
//		cout << "-----------------" << endl;
//		cout << "1.Insert Element " << endl;
//		cout << "2.Inorder Traversal" << endl;
//		cout << "3.Preorder Traversal" << endl;
//		cout << "4.Postorder Traversal" << endl;
//		cout << "5.Delete Min node" << endl;
//		cout << "6.Delete Max node" << endl;
//		cout << "7.Display" << endl;
//		cout << "8.Quit" << endl;
//		cout << "Enter your choice : ";
//		cin >> choice;
//		switch (choice) {
//		case 1:
//			temp = new node;
//			cout << "Enter the number to be inserted : ";
//			cin >> temp->info;
//			bst.insert(root, temp);
//			break;
//		case 2:
//			cout << "Inorder Traversal of BST:" << endl;
//			bst.inorder(root);
//			cout << endl;
//			break;
//		case 3:
//			cout << "Preorder Traversal of BST:" << endl;
//			bst.Preorder(root);
//			cout << endl;
//			break;
//		case 4:
//			cout << "Postorder Traversal of BST:" << endl;
//			bst.Postorder(root);
//			cout << endl;
//			break;
//		case 5:
//			bst.DeleteMin(root);
//			cout << endl;
//			break;
//		case 6:
//			bst.DeleteMax(root);
//			cout << endl;
//			break;
//		case 7:
//			cout << "Display BST:" << endl;
//			bst.display(root, 1);
//			cout << endl;
//			break;
//		case 8:
//			exit(1);
//		default:
//			cout << "Wrong choice" << endl;
//		}
//	}
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
//node* BST::FindMin(node* ptr) {
//	while (ptr->left != NULL)
//		ptr = ptr->left;
//	return ptr;
//}
//node* BST::FindMax(node* ptr) {
//	while (ptr->right != NULL)
//		ptr = ptr->right;
//	return ptr;
//}
//node* BST::Delete(node *ptr, int data) {
//	if (ptr == NULL)
//		cout << "Tree is Empty !!!" << endl;
//	else if (data < ptr->info) {
//		ptr->left = Delete(ptr->left, data);
//	}
//	else if (data > ptr->info) {
//		ptr->right = Delete(ptr->right, data);
//	}
//	else {
//		if (ptr->left == NULL && ptr->right == NULL) {      // No child
//			delete ptr;
//			ptr = NULL;
//		}
//		else if (ptr->left == NULL) {           // one child
//			node *temp = ptr;
//			ptr = ptr->right;
//			delete temp;
//		}
//		else if (ptr->right == NULL) {         //one child
//			node *temp = ptr;
//			ptr = ptr->left;
//			delete temp;
//		}
//		else {
//			node *temp = FindMin(ptr->right);
//			ptr->info = temp->info;
//			ptr->right = Delete(root->right, temp->info);
//		}
//
//	}
//	return ptr;
//
//}
//void BST::DeleteMin(node *ptr) {
//	node *temp = FindMin(ptr);
//	int val = temp->info;
//	temp = Delete(ptr, val);
//	cout << val << " is deleted" << endl;
//}
//void BST::DeleteMax(node *ptr) {
//	node *temp = FindMax(ptr);
//	int val = temp->info;
//	temp = Delete(ptr, val);
//	cout << val << " is deleted !!" << endl;
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
