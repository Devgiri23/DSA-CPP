#include<iostream>
using namespace std;
#include<map>
//---------------------------Detecting Loop--------------------------------------------------------------------------------------
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

bool detectLoop(Node* head){
	if(head==NULL){
		return false;
	}
	Node* temp=head;
    map<Node*,bool> visited;
	
	while(temp!=NULL){
		if(visited[temp]==true){
			cout<<"cycle present ---"<<temp->data<<endl;
			
			return true;
		}
		visited[temp]=true;
		temp=temp->next;
		
	}
	return false;
}


int main(){
	
	Node* node1=new Node(1);
	
	Node* head=  node1;
	Node* tail=  node1;
	
	insertAtTail(tail,2);
	insertAtTail(tail,3);
	insertAtTail(tail,4);
	insertAtTail(tail,5);
	print(head);
	
	cout<<detectLoop(head)<<endl;
	
	tail->next=head->next;
	cout<<detectLoop(head);
	
}
*/


/*
//==============================================================================================================================================
//--------------------------------Floyd Detect Loop Algorithm--------------------------------------------------------------------------------

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


Node* floydDetectLoop(Node* head){
	if(head==NULL){
		return NULL;
	}
	Node* slow=head;
	Node* fast=head;
	
	while(slow!=NULL && fast!=NULL){
		fast=fast->next;
		if(fast!=NULL){
			fast=fast->next;
		}
			slow=slow->next;
			
			if(slow==fast){
				
				return slow;
			}
	}
	return NULL;
}


int main(){
	Node* node1=new Node(1);
	
	Node* head=  node1;
	Node* tail=  node1;
	
	insertAtTail(tail,2);
	insertAtTail(tail,3);
	insertAtTail(tail,4);
	insertAtTail(tail,5);
	print(head);
	

	
	tail->next=head->next;
	if(floydDetectLoop(head)!=NULL){
		cout<<"cycle is present "<<endl;
	}
	else{
		cout<<"No cycle present"<<endl;
	}
}*/

//==================================================================================================================================
//----------------------------------Starting Node of LOOP--------------------------------------------------------------------
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


Node* floydDetectLoop(Node* head){
	if(head==NULL){
		return NULL;
	}
	Node* slow=head;
	Node* fast=head;
	
	while(slow!=NULL && fast!=NULL){
		fast=fast->next;
		if(fast!=NULL){
			fast=fast->next;
		}
			slow=slow->next;
			
			if(slow==fast){
				
				return slow;
			}
	}
	return NULL;
}
Node* getStartingNode(Node* head){
	
	if(head==NULL){
		return NULL;
		
	}
	Node* intersection=floydDetectLoop(head);
	Node* slow=head;
	
	while(slow!=intersection){
		slow=slow->next;
		intersection=intersection->next;
		
	}
	return slow;
	

}
int main(){
	Node* node1=new Node(1);
	
	Node* head=  node1;
	Node* tail=  node1;
	
	insertAtTail(tail,2);
	insertAtTail(tail,3);
	insertAtTail(tail,4);
	insertAtTail(tail,5);
	print(head);
	tail->next=head->next->next;
	Node* answer=getStartingNode(head);
	cout<<answer->data<<endl;
	
}