#include <iostream>
#include <string>
#include "BinaryTree.h"

using namespace std;


void BinaryTree::insert(int insertId){
	
	root = insertRecursion(root, insertId);
	
	
	
}



Node *BinaryTree::insertRecursion(Node *currentRoot, int insertId){
	
	if (currentRoot == NULL){
		currentRoot = new Node();
		currentRoot->id = insertId;
		return currentRoot;
	}
	
	if(insertId < currentRoot->id){
		currentRoot->left = insertRecursion(currentRoot->left, insertId);
	}
	else if(insertId > currentRoot->id){
		currentRoot->right = insertRecursion(currentRoot->right, insertId);
	}
	
	return currentRoot;
}

void BinaryTree::inOrder(){
	inOrderRecursive(root);
	
}

void BinaryTree::inOrderRecursive(Node *currentRoot){
	
	if(currentRoot != NULL){
		inOrderRecursive(currentRoot->left);
		cout << currentRoot->id << "->";
		inOrderRecursive(currentRoot->right);
	}
	
}

void BinaryTree::preOrder(){
	preOrderRecursive(root);
}

void BinaryTree::preOrderRecursive(Node *currentRoot){
	if(currentRoot != NULL){
		cout<<currentRoot->id<<"->";
		preOrderRecursive(currentRoot->left);
		preOrderRecursive(currentRoot->right);
	}
}

void BinaryTree::postOrder(){
	postOrderRecursive(root);
}

void BinaryTree::postOrderRecursive(Node *currentRoot){
	if(currentRoot != NULL){
		postOrderRecursive(currentRoot->left);
		postOrderRecursive(currentRoot->right);
		cout<<currentRoot->id<<"->";
	}
}


Node* BinaryTree::search(int val){
	Node* node = root;
    while (node != NULL) {
        if (node->id == val) {
            cout << "Node is found in the tree." << endl;
            return node;
        }
        if (val < node->id) {
            node = node->left;
        } else {
            node = node->right;
        }
    }
    cout << "Node is not in the tree." << endl;
    return NULL;
}

Node* BinaryTree::findMax(){
	Node* node = root;
	while (node != NULL && node->right != NULL) {
        node = node->right;
    }
    
    
    if (node != NULL) {
        cout << "Maximum value: " << node->id << endl;
    } else {
        cout << "Binary tree is empty." << endl;
    }

    return node;
}

Node* BinaryTree::findMin(){
	Node* node = root;
    while (node != NULL && node->left != NULL) {
        node = node->left;
    }

    if (node != NULL) {
        cout << "Minimum value: " << node->id << endl;
    } else {
        cout << "Binary tree is empty." << endl;
    }

    return node;
}
