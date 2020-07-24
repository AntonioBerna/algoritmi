#include <iostream>
#include <string>
using namespace std;

class Node{
public:
	int data;
	Node *left;
	Node *right;
	Node(int data){
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

Node *search(Node *root, int data){
	if(root == NULL){
		cout << "Not found" << endl;
		return NULL;
	}
	if(root->data == data){
		cout << "found at: " << root << endl;
		return root;
	}
	if(root->data < data){
		return search(root->right, data);
	}else{
		return search(root->left, data);
	}
}

void insert(Node *root, int data){
	if(root == NULL){
		Node *root = new Node(data);
	}else if(data <= root->data){
		if(root -> left != NULL){
			insert(root->left, data);
		}else{
			root -> left = new Node(data);
		}
	}else if(data > root->data){
		if(root -> right != NULL){
			insert(root->right, data);
		}else{
			root -> right = new Node(data);
		}
	}
}

int main(){

	Node *root = new Node(5);

	insert(root, 3);
	insert(root, 8);
	insert(root, 1);
	insert(root, 4);
	insert(root, 7);
	insert(root, 9);
	insert(root, 0);
	insert(root, 2);
	insert(root, 6);
	insert(root, 10);

	search(root, 10);

	delete [] root;

	return 0;
}