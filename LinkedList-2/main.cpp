#include<iostream>
using namespace std;

//inserting at head

class Node{
	
public:
	int data;
	
	Node* next;
	
	Node(int data){
		
		this->data=data;
		this->next=NULL;
		
	}
	
};


void insertAtHead(Node* &head,int d){
	
	//creating new node
	
	Node* temp=new Node(d);
	
	temp->next=head;
	head=temp;
	

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
	
	// cout<<node1->data<<endl;
	
	Node* head=node1;
	print(head);
	
	insertAtHead(head,12);
	
	print(head);
	
	
	
	
	
	
	
}