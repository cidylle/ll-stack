// Stack using linked list. (+ a reverse link list function)
// Author:: Christian Idylle (idylle.christian@gmail.com)
// License:: The MIT License (MIT) Copyright (c) 2015 Christian Idylle

#include <iostream>
using namespace std;


typedef struct element { 

element *next;
int data;

} element;

bool push(element **head, int data);
element* pop(element **head);
void print(element *head);

bool reverse(element **head);

int main() {

	element *head = new element;
	head = 0;

	// testing various functions 
	push(&head,1); push(&head,2); push(&head,3); push(&head,4);
	print(head);
	reverse(&head);
	print(head);	
	pop(&head);
	print(head);	
	 
	return 0; 

}

void print(element *head)
{
	while(head != 0){
	cout << head->data << endl;
	head = head->next;
	}
	cout << "End of Stack" << endl;
}

bool push(element **head, int data) { 

	element *newElement = new element;
	newElement->data = data;
	newElement->next = 0;

	if((*head) == 0) { 
		*head = newElement; 
		}

	else { 
		newElement->next = *head; 
		*head = newElement;
		}

	return true; 
}

element * pop(element **head) {

	if(*head == 0) { return 0; } 

	else { 
		element *popped;
		popped = *head;
		*head = (*head)->next; 
		return popped; 
		}	
}

bool reverse(element **head){

	element *temp1 = 0; 
	element *temp2 = (*head)->next;

	while((*head)!=0) {
		temp2=(*head)->next;
		(*head)->next = temp1; 
		temp1=*head;
		*head=temp2;
		}
		
	*head = temp1;

 	return true;
} 



	
 
		
		 	



