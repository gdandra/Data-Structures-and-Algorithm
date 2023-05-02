#include <iostream>
using namespace std;


class Node{
	public:
		
		int value;
		Node* next;
		
		Node(int n){
			this->value = n;
			this->next = NULL;
		}
};


class Queue{
	
	Node* front;
	Node* rear;
	public:
		Queue(){
			front = rear = NULL;	
		}
		void enQueue(int value){
			Node* tmp = new Node(value);
			
			if(rear == NULL){
				front = rear = tmp;
				return;
			}
			rear->next = tmp;
			rear = tmp;
		}
		
		void deQueue(){
			Node* tmp;
			
			if(front == NULL){
				return;
			}
			
			tmp = front;
			front = front->next;
			delete (tmp);
		}

	void display(){
		Node* tmp;
		tmp = front;
		
		if(front == NULL) {
			cout << "Queue is empty";
			exit(1);
		} 
		else{
			
			while(tmp != NULL){
				
				cout << tmp->value;
				tmp = tmp->next;
				if(tmp != NULL){
					cout << "->";
				}
			}
		}
	}	
		

};


		
int main(){
	
	Queue iki;
	int n;
	char x;
	
	do{
		cout << "Enter a number to be inserted to queue : ";
		cin >> n;
		
		iki.enQueue(n);
		iki.display();
		
		cout << "\nDo you want to enter another number? y/n? " << endl;
		cin >> x;
	}
	while(x == 'y');
	
	iki.display();
	
	cout << "\ndo you want to delete a number from queue? y/n? " << endl;
	cin >> x;
	if (x == 'y'){
		do {

			iki.deQueue();
			iki.display();
		
			cout << "\ndo you want to delete another number? y/n? ";
			cin >> x;
		}
		while(x == 'y');
	}	

	
	iki.display();
	
	return 0;
	
	
}
