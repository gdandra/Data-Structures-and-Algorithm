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

class Stack{
	Node* top;
	
	public:
		Stack()	{
			top = NULL;
		}
		void push(int value){
			Node* tmp = new Node(value);
		
			if(tmp == NULL){
				cout << "Stack Overflow" << endl;
				exit(1);
			}
			
			tmp->value = value;
			
			tmp->next = top;
			
			top = tmp;
			
		}

	bool isEmpty(){
		return top == NULL;
	}

	void Pop(){
		Node* tmp;
	
		if (top == NULL){
			cout << "Stack Underflow" << endl;
			exit(1);
		}
		else {
			tmp = top;
		
			top = top->next;
		
			delete(tmp);
		}
		
	}
		
	void display(){
		Node* tmp;
		
		if (top == NULL){
			cout << "\n Stack Underflow";
			exit(1);
		}
		else{
			tmp = top;
			while (tmp != NULL){
				
				cout << tmp->value;
				
				tmp = tmp->next;
				
				if (tmp != NULL){
					cout << "->";
				}
			}
		}
	}
};

int main(){
	
	Stack iki;
	int n;
	char x;
	
	do {
		cout << "Enter a number : ";
		cin >> n;
		
		iki.push(n);
		iki.display();
		cout << "\nhead is = " << n;
		cout << "\nDo you want to add another number? y/n?" << endl;
		
		cin >> x;
	}
	while(x == 'y');
	
	
	iki.display();
	
	cout << "\nDo you want to pop a data? y/n?" << endl;
	cin >> x;
	if(x == 'y'){
		do {
			iki.Pop();
			iki.display();
			
			cout << "\nDo you want to pop another data? y/n?";
			cin >> x;
		}
		while(x == 'y');
	}	
	
	iki.display();
	
	return 0;
}



