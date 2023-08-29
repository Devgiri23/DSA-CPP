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
	
	~Node(){
 		int value=this->data;
		//memory free
		
		if(this->next!=NULL){
			delete next;
			this->next=NULL;
			
		}
		cout<<"memory is free for node with data"<<endl;
	}
	
};
void insertattail(Node* &tail,int d){
	Node* temp=new Node(d);
	
	tail->next=temp;
	tail=temp;
	
}

void deleteNode(int position,Node* &head,Node* &tail){
	//deleting first or start node
	if(position==1){
		Node*  temp=head;
		head=head->next;
		//memory free start node
		delete temp;
	}
	
	else{
		
		Node* curr=head;
		Node* prev=NULL;
		
		int count=1;
		while(count<position){
			prev=curr;
			curr=curr->next;
			count++;
		}
		
		prev->next=curr->next;
		curr->next=NULL;
		delete curr;
		if(prev->next==NULL){
			tail=prev;
			
			
		}
		
		
	}
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
	insertattail(tail,25);
	insertattail(tail,35);
	print(head);
	
	deleteNode(3,head,tail);
	print(head);
	
	cout<<head->data<<endl;
	cout<<tail->data<<endl;
}