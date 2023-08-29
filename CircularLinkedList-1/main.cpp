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
		cout<<"memory is free of node with data"<<value<<endl;
		
	}
};

void insertData(Node* &tail,int element,int d){
	
	//assuming the element is present
	
	//if lsit is empty
	if(tail==NULL){
		Node* newnode1=new Node(d);
		tail=newnode1;
		newnode1->next=newnode1;
	}
	
	else{
		//NONEMPTY LIST
		Node* curr=tail;
		while(curr->data!=element){
			curr=curr->next;
			
		}
		
		//element found at curr position
		
		Node* temp=new Node(d);
		temp->next=curr->next;
		curr->next=temp;
		
		
		
		
	}
	
	
}

void print(Node* tail){
	Node* temp=tail;
	do{
		cout<<tail->data<<" ";
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
	
	
	
}