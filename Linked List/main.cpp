#include <iostream>
#include "LinkedList.h"
using namespace std;


int main(int argc, char** argv) {
	

	LinkedList List1;
	
	List1.insertToHead(10);
	List1.insertToHead(20);
	List1.insertToHead(30);
	List1.insertToHead(50);
	List1.insertAfter(30, 40);
	

	
	List1.printAll();

	return 0;
} 
