#include<iostream>
using namespace std;


class Node{
public:
	int data;
	Node* prev;
	Node* next;
	
	
	Node(int data){
		this->data=data;
		this->next=NULL;
		this->prev=NULL;
		
	}
};

void insertAtTail(Node* &tail,int d){
	 Node* temp=new Node(d);
	
	
	tail->next=temp;
	temp->prev=tail;
	tail=temp;
}
void print(Node* &head){
	Node* temp=head;
	
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
		
	}
	cout<<endl;
}

int main(){
	
	
	Node* node1=new Node(10);
	Node* head=node1;
	
	Node* tail=node1;
	insertAtTail(tail,12);
	insertAtTail(tail,20);
	print(head);
	
	
}


























