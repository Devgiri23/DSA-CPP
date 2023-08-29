#include<iostream>
using namespace std;


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

void insertAtMiddle(Node* &head,int position,int d){
	Node* temp=head;
	int count=1;
	while(count<position-1){
		temp=temp->next;
		count++;
		
	}
	 
	Node* nodetoinsert=new Node(d);
	nodetoinsert->next=temp->next;
	temp->next=nodetoinsert;
	 
} 
void print(Node* &head){
	
	Node* temp=head;
	
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
		
	}cout<<endl;
}

int main(){
	Node* node1=new Node(10);
	Node* head=node1;
	
	
	insertAtHead(head,12);
	
	insertAtHead(head,15);
	
	insertAtHead(head,26);
	print(head);
	
	insertAtMiddle(head,3,22);
	print(head);
	
}