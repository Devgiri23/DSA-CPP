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

void insertathead(Node* &head,int d)
{
	Node* temp=new Node(d);
	temp->next=head;
	head=temp;
	
}
void insertattail(Node* &tail,int d){
	Node* temp=new Node(d);
	
	tail->next=temp;
	tail=temp;
}



void insertatPosition(Node* &tail,Node* &head,int position,int d){
	
	//for inserttion at position 1
	if(position==1){
		insertathead(head,d);
		return ;
	}
	
	Node* temp=head;
	int count =1;
	while(count< (position-1)){
 	
		temp=temp->next;
		count++;
		
	}
	
	
	//inserting at last position
	if((temp->next)==NULL){
		insertattail(tail,d);
		return ;
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
		
		
	}
	cout<<endl;
}

int main(){
	Node* node1=new Node(10);
	
	Node* head=node1;
	Node* tail=node1;
	
	insertattail(tail,12);
	insertattail(tail,15);
	insertattail(tail,20);
	
	print(head);
	//print(head);
	
	insertatPosition(tail,head,3,22);
	
	print(head);
	
	
	insertatPosition(tail,head,1,111);
	
	print(head);
	
	insertatPosition(tail,head,7,109);
	print(head);
	
	
	cout<<"head"<<head->data<<endl;
	
	cout<<"tail"<<tail->data<<endl; 
}