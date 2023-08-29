#include<iostream>
using namespace std;

class Node{
public:
	int data;
	Node* prev;
	Node* next;
	
	Node(int data){
		this->data=data;
		this->prev=NULL;
		this->next=NULL;
		
	}
	
	
};

void insertAtTail(Node* &tail,Node* &head,int d){
	//if list is emoty at beginuing
	if(tail==NULL){
		Node* temp=new Node(d);
		tail=temp;
		head=temp;
		
	}
	else{
	    Node* temp=new Node(d);
		tail->next=temp;
	    temp->prev=tail;
	    tail=temp;
	}
	
	
	
}
void insertAtHead(Node* &head,Node* &tail,int d){
	
	//empty list at begining
	if(head==NULL){
		Node* temp=new Node(d);
	    head=temp;
		tail=temp;
		
	}
	else{
			Node* temp=new Node(d);
	        temp->next=head;
	        head->prev=temp;
	        head=temp;
		
	}

	
}

void insertAtPosition(Node* &head,Node* &tail,int position,int d){
	if(position==1){
		insertAtHead(head,tail,d);
		return ;
	}
	
	Node* temp=head;
	int count=1;
	while(count<position-1){
		temp=temp->next;
		count++;
		
	}
	if(temp->next==NULL){
		insertAtTail(tail,head,d);
		return ;
	}
	
	Node* nodetoinsert=new Node(d);
	nodetoinsert->next=temp->next;
	temp->next->prev=nodetoinsert;
	temp->next=nodetoinsert;
	nodetoinsert->prev=temp;
	
	
	
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
	
	insertAtTail(tail,head,12);
	insertAtTail(tail,head,15);
	insertAtTail(tail,head,20);
	print(head);
	insertAtPosition(head,tail,3,1);
	print(head);
	
	
	insertAtPosition(head,tail,1,100);
	print(head);
	
	insertAtPosition(head,tail,7,112);
	print(head);
	
	insertAtPosition(head,tail,8,200);
	print(head);
	cout<<"head is--"<<head->data<<endl;
	
	cout<<" tail is-- "<<tail->data<<endl;
}

//--------------------------------for emoty list case---------------------------------------------------------------------
/*
int main(){
	
	Node* head=NULL;
	Node* tail=NULL;
	
	insertAtTail(tail,head,12);
	insertAtTail(tail,head,15);
	insertAtTail(tail,head,20);
	print(head);
	insertAtPosition(head,tail,3,1);
	print(head);
	
	
	insertAtPosition(head,tail,1,100);
	print(head);
	
	insertAtPosition(head,tail,6,112);
	print(head);
	
	insertAtPosition(head,tail,7,200);
	print(head);
	cout<<"head is--"<<head->data<<endl;
	
	cout<<" tail is-- "<<tail->data<<endl;
}*/