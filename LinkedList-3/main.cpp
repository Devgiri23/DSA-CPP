#include<iostream>
using namespace std;


//insertt at tail


class Node{
	
public:
	int data;
	Node* next;
	
	
	Node(int data){
		this->data=data;
		this->next=NULL;
		
	}
};

void insertAtTail(Node* &tail,int d){
	
	///creating new node
	
	Node* temp=new Node(d);
	tail -> next=temp;
	tail=temp;
	//tail=tail->next;
	
	
}

void print(Node* &head){
	//new node creating
	
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
	print(head);
	
	insertAtTail(tail,12);
	print(head);
	insertAtTail(tail,15);
	
	print(head);
}