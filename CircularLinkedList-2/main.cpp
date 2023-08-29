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
		if(this->next!=NULL){
			delete next;
			this->next=NULL;
			
		}
		cout<<"memory is free for node with data"<<value<<endl;
		
	}
	
};

void insertData(Node* &tail,int element,int data){
	if(tail==NULL){
		Node* newnode1=new Node(data);
		tail=newnode1;
		newnode1->next=newnode1;
	}
	else{
		Node* curr=tail;
		while(curr->data!=element){
			curr=curr->next;
		}
		//element found
		
		Node* temp=new Node(data);
		temp->next=curr->next;
		curr->next=temp;
		
	}
}
void deleteNode(Node* &tail,int value){
	if(tail==NULL){
		cout<<"List is empty "<<endl;
		return ;
		
	}
	else{
		//non empty
		//assuminhg the value is presenmt
		
		Node* previous= tail;
		Node* curr=previous->next;
		
		while(curr->data!= value){
			previous=curr;
			curr=curr->next;
		}
		previous->next=curr->next;
		
		//1 NODE LINKED LIST
		if(curr==previous){
			tail=NULL;
		}
		
		//2 or more node present in ll
		else if(tail==curr){
			tail=previous;
		}
		
		curr->next=NULL;
		delete curr;
		
		
	}
	
}
void print(Node* &tail){
	Node* temp=tail; 
	//if list is empty
	if(tail==NULL){
		cout<<"list is empty"<<endl;
	}
	
	do{
		cout<<tail->data<<"  ";
		tail=tail->next;
	}while(tail!=temp);
	cout<<endl;
}



int main(){
	
	Node* tail=NULL;
	
		insertData(tail,5,3);
	print(tail);
	
	
	insertData(tail,3,5);
	print(tail);
	
	insertData(tail,5,7);
	print(tail);
	
	insertData(tail,7,9);
	print(tail);
	
	insertData(tail,5,10);
	print(tail);
	
	deleteNode(tail,3);
	print(tail);
	
	deleteNode(tail,10);
	print(tail);
}
