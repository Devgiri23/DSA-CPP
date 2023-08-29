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
void insertattail(Node* &tail,int d){
	Node* temp=new Node(d);
	
	tail->next=temp;
	temp->prev=tail;
	tail=temp;
	
}
void insertathead(Node* &head,int d){
	Node* temp=new Node(d);
	
	temp->next=head;
	head->prev=temp;
	head=temp;
	
}


void insertatPosition(Node* &head,Node* &tail,int position,int d){
	//if insertion is at starting
	if(position==1){
		insertathead(head,d);
		return ;
		
	}
	int count=1;
	Node* temp=NULL;
	Node* curr=head;
	while(count<position){
		temp=curr;
		curr=curr->next;
		
		count++;
		
	}
	//inserting at last position
	if(temp->next==NULL){
		insertattail(tail,d);
		return ;
	}
	
	Node* nodetoinsert=new Node(d);
	nodetoinsert->next=temp->next;
	nodetoinsert->prev=curr->prev;
	curr->prev=nodetoinsert;
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
	
	insertatPosition(head,tail,5,98);
	print(head);
	
	insertatPosition(head,tail,1,100);
	print(head);
	
	insertatPosition(head,tail,4,78);
	print(head);
	cout<<"head is-- "<<head->data<<endl;
	cout<<"tail is-"<<tail->data<<endl;
	
}