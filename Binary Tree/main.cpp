#include <iostream>
#include <string>
#include "BinaryTree.h"

using namespace std;

int main(int argc, char** argv){
	
	BinaryTree bin;
	
	bin.insert(10);
	bin.insert(5);
	bin.insert(2);
	bin.insert(7);
	bin.insert(15);
	bin.insert(20);
	bin.insert(17);
	bin.insert(25);
	bin.insert(30);
	
	cout << bin.root->id<<endl;
	cout << bin.root->left->id<<endl;
	bin.inOrder();
	cout << endl;
	bin.postOrder();
	cout << endl;
	bin.preOrder();
	cout << endl;
	bin.findMax();
	cout << endl;
	bin.findMin();
	
	return 0;
}
