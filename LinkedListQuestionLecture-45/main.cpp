#include<iostream>
using namespace std;
//--------------------------------------Rverse LL by Iterative Approach-------------------------------------------------------------------------------------
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
Node* reverseLinkedList(Node* head){
	if(head==NULL || head->next==NULL){
		return head;
	}
	Node* prev=NULL;
	Node* current=head;
	Node* forward=NULL;
	
	while(current!=NULL){
		forward=current->next;
		current->next=prev;
		prev=current;
		current=forward;
	}
	head=prev;
	return prev;
}
void print(Node* &head){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
	
}



void insertAtTail(Node* &tail,int d){
	Node* temp=new Node(d);
	tail->next=temp;
	tail=temp;
}
int main(){
	Node* node1=new Node(1);
	Node* head=node1;
	Node* tail=node1;
	insertAtTail(tail,2);
	insertAtTail(tail,3);
	insertAtTail(tail,4);
	insertAtTail(tail,5);
	print(head);
	cout<<"head is--"<<head->data<<endl;
	cout<<"tail is"<<tail->data<<endl;
	
	head=reverseLinkedList(head);
	print(head);
	cout<<"head is--"<<head->data<<endl;
	
	
	
	

	
}*/

//----------------------------------------------Reverse a LL by Recursion------------------------------------------------------------------
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


//NY RECURSION-----
void reverse(Node* &head,Node* &curr,Node* &prev){
	//base case
	if(curr==NULL){
		head=prev;
		return;
		
	}
	
	Node* forward=curr->next;
	reverse(head,forward,curr);
	curr->next=prev;
	
	

}

Node* reverseLL(Node* &head){
	Node* curr=head;
	Node* prev=NULL;
	reverse(head,curr,prev);
	head=prev;
	return prev;
	
}


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
int main(){
	Node* node1=new Node(1);
	Node* head=node1;
	Node* tail=node1;

	insertAtTail(tail,2);
	insertAtTail(tail,3);
	insertAtTail(tail,4);
	insertAtTail(tail,5);
	
	
	print(head);
	reverseLL(head);
	
	print(head);
}
*/


//=====================================================================================================================================
//-------------------------------------------Middle of Linked List--------------------------------------------------


class Node{
public:
	int data;
	Node* next;
	
	Node(int data){
		this->data=data;
		this->next=NULL;
		
	}
};
int getLength(Node* &head){
	Node* temp=head;
	int len=0;
	while(temp!=NULL){
		len++;
		temp=temp->next;
	}
	return len;
}
Node* findMiddle(Node* &head){
	int len=getLength(head);
	int ans=(len/2);
	
	int count=0;
	Node* temp=head;
	while(count<ans){
		temp=temp->next;
		count++;
		
		
	}
	return temp;
	
	
}
void print(Node* head){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
		
	}
	
}
void insertAtTail(Node* &tail ,int d){
	Node* temp =new Node(d);
	tail->next=temp;
	tail=temp;
	
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
	cout<<endl;
	cout<<"head is--"<<head->data<<endl;
	
	cout<<"length is---"<<getLength(head)<<endl;
	
	cout<<endl;
	
	Node* answer=findMiddle(head);
	cout<<"Middle element is--"<<answer->data<<endl;
	

}

