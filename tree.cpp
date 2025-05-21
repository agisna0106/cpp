#include <iostream>
using namespace std;

struct Node{
	char data;
	Node *left = NULL;
	Node *right = NULL;
};

struct Tree{
	Node *root = NULL;
}; 

bool isEmpty(Node *&simpul) {
	return (simpul == NULL);
}

void initNode(Node *&simpul, char data) {
	if(isEmpty(simpul)) {
		simpul = new Node;
		simpul->data = data;
	}
}

void preOrder(Node *root) {
	if(!isEmpty(root)) {
		cout << root->data << " ";
		preOrder(root->left);
		preOrder(root->right);
	}
}

void inOrder(Node *root) {
	if(!isEmpty(root)) {
		inOrder(root->left);
		cout << root->data << " ";
		inOrder(root->right);
	}
}

void postOrder(Node *root) {
	if(!isEmpty(root)) {
		postOrder(root->left);
		postOrder(root->right);
		cout << root->data << " ";
	}
}

int main () {
	Tree *t1 = new Tree;
	initNode(t1->root, 'A');
	preOrder(t1->root);
	#include <iostream>
using namespace std;

struct Node{
	char data;
	Node *left = NULL;
	Node *right = NULL;
};

struct Tree{
	Node *root = NULL;
}; 

bool isEmpty(Tree *&simpul) {
	return (simpul == NULL);
}

void initNode(Node *&simpul, char data) {
	if(isEmpty(simpul)) {
		simpul = new Node;
		simpul->data = data;
	}
}

void preOrder(Node *root) {
	if(!isEmpty(root)) {
		cout << root->data << " ";
		preOrder(root->left);
		preOrder(root->right);
	}
}

void inOrder(Node *root) {
	if(!isEmpty(root)) {
		inOrder(root->left);
		cout << root->data << " ";
		inOrder(root->right);
	}
}

void postOrder(Node *root) {
	if(!isEmpty(root)) {
		postOrder(root->left);
		postOrder(root->right);
		cout << root->data << " ";
	}
}

int main () {
	Tree *t1 = new Tree;
	initNode(t1->root, 'A');
	preOrder(t1->root);
	inOrder(t1->root);
	postOrder(t1->root);
	
	return 0
}

