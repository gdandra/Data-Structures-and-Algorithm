#include <iostream>
#include "LinkedList.h"
using namespace std;

void LinkedList::insertToHead(int val){
	
	Node *newNode = new Node();
	newNode->value = val;
	
	newNode->next = head;
	head = newNode;
	
	if (tail==NULL)
		tail = head;
		
}

void LinkedList::printAll(){
	
	Node *tmp = head;
	while (tmp!=NULL){
		cout << tmp->value << "->";
		tmp = tmp->next;
	}
	cout <<endl;
}

void LinkedList::insertToTail(int val){
	Node* newNode = new Node();
	newNode->value = val;
	
	if (head == NULL){
		head = newNode;
		tail == newNode;
	}
	else{
		tail->next = newNode;
		tail = newNode;
	}
}

void LinkedList::insertAfter(int before, int val){

	if (head == NULL){
		cout << "List is Empty! Cannot insert after an empty linked list" << endl;
		return;
	}

	Node *tmp = head;
	
	while (tmp != NULL){
		if (tmp->value == before){
			Node *newNode = new Node();
			newNode->value = val;
			newNode->next = tmp->next;
			tmp->next = newNode;
			return;
		}
	
		tmp = tmp->next;
		
	}
	
	cout << "Value is not found in the linked list" << endl;
	
}

