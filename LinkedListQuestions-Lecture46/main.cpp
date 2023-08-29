#include<iostream>
using namespace std;

///------------------------reverse k groups--------------------------------------------------------------------------------------------
/*
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
	Node* temp=new Node(d);
	tail->next=temp;
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
Node* kReverse(Node* &head,int k){
	//base case
	if(head==NULL){
		return NULL;
		
	}
	
	//step1:reverese 1st k nodes
	
	Node* prev=NULL;
	Node* curr= head;
	Node* forward=NULL;
	
	int count=0;
	while( curr!=NULL && count<k){
		forward=curr->next;
		curr->next=prev;
		prev=curr;
		curr=forward;
		count++; 	
		
		
	}
	//step 2:recursion dekhlega
	if(forward!=NULL){
		head->next=kReverse(forward,k);
	}
	//step 3: return head os reversed list
	head=prev;
	return prev;

	
}
int main(){
	Node* node1=new Node(1);
	Node* head=node1;
	Node* tail=node1;
	
	
	insertAtTail(tail,2);
	insertAtTail(tail,3);
	insertAtTail(tail,4);
	insertAtTail(tail,5);
	insertAtTail(tail,6);
	
	print(head);
	
	head=kReverse(head,2);
	print(head);
	
}

*/
//==================================================================================================================================
//------------------------if LL is circular or not-------------------------------------------------------------------------------
class Node{
	
public:
	int data;
	Node* next;
	
	
	
	Node(int data){
		this->data=data;
		this->next=NULL;
	}
	
};
void insertNode(Node* &tail,int element,int d){
	if(tail==NULL){
		Node* newNode=new Node(d);
		tail=newNode;
		newNode->next=newNode;
		
	}
	
	else{
		Node* curr=tail;
		
		while(curr->data!=element){
			curr=curr->next;
		}
		Node* temp=new Node(d);
		temp->next=curr->next;
		curr->next=temp;
		
	}
}

void print(Node* &tail){
	Node* temp=tail;
	do{
	   cout<<temp->data<<" ";
	   temp=temp->next;
	   
	   
	}while(temp!=tail);
	
	cout<<endl;
}
bool isCircular(Node* &tail){
	if(tail== NULL){
		return true;
		
	}
	Node* temp=tail->next;
	while(temp!=NULL && temp!=tail){
		temp=temp->next;
	}
	if(temp==tail){
		return true;
	}
	
	
	return false;
	
	
}
int main(){
	Node* tail=NULL;
	
	insertNode(tail,5,3);
	insertNode(tail,3,6);
	insertNode(tail,6,8);
	insertNode(tail,8,11);
	
	print(tail);
	
	if(isCircular(tail)){
		cout<<"LL is circular"<<endl;
	}
	else{
		cout<<"LL is not Circular"<<endl;
	}
}


