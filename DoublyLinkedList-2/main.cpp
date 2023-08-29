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
void insertAtHead(Node* &head,int d){
	//first step: creating a new node in which the data will come
	
	Node* temp=new Node(d);
	
	
	temp->next=head;
	head->prev=temp;
	head=temp;
}
void print(Node* &head){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
	
	
}
int getlength(Node* &head){
	Node* temp=head;
	int len=0;
	while(temp!=NULL){
		len++;
		temp=temp->next;
		
	}
	return len;
}

int main(){
	
	
	Node* node1=new Node(10);
	
	Node* head=node1;
	print(head);
	
	insertAtHead(head,12);
	insertAtHead(head,15);
	print(head);
	cout<<"lenght is --"<<getlength(head)<<endl;

}



