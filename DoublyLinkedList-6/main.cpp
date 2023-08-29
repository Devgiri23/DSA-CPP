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
	
	~Node(){
		int value=this->data;
		if(this->next!= NULL){
			delete next;
			this->next=NULL;
		}
	
	cout<<"memory is free for ddata--"<<value<<endl;
	}
};

void insertAtTail(Node* &tail,int d){
	Node* temp=new Node(d);
	tail->next=temp;
	temp->prev=tail;
	tail=temp;
	
}

void deleteNode(Node* &head,int position){
	if(position==1){
		Node* temp=head;
		temp->next->prev=NULL;
		head=temp->next;
		temp->next=NULL;
		delete temp;
		
	}
	
	else{
		Node* curr=head;
		Node* previous=NULL;
		int count=1;
		while(count<position-1){
			previous=curr;
			curr=curr->next;
			count++;
		}
		curr->prev=NULL;
		previous->next=curr->next;
		curr->next=NULL;
		delete curr;
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
	
	
	insertAtTail(tail,12);
	print(head);
	insertAtTail(tail,15);
	print(head);
	
	insertAtTail(tail,20);
	print(head);
	
	insertAtTail(tail,25);
	print(head);
	
	
	deleteNode(head,1);
	print(head);
	
	deleteNode(head,3);
	print(head);

	
	/*deleteNode(head,1);
	print(head);
	
	deleteNode(head,3);
	print(head);
	*/
	cout<<"head is--"<<head->data<<endl;
	cout<<"tail is--"<<tail->data<<endl;
}