#include<iostream>
using namespace std;
#include<queue>

class Node{
	
public:
	
	int data;
	Node* left;
	Node* right;
	
	
	Node(int d){
		this->data=d;
		this->left=NULL;
		this->right=NULL;
	}
};

Node* buildTree(Node* root){
	
	cout<<"Enter the data :"<<endl;
	
	int data;
	cin>>data;
	
	root=new Node(data);
	
	if(data==-1){
		return NULL;
	}
	cout<<"Enter Data for inserting in left of-"<<data<<endl;
	
	root->left=buildTree(root->left);
	
	cout<<"Enter Data for inserting in right of-"<<data<<endl;
	
	root->right=buildTree(root->right);
	
	
	return root;
	
}
void levelOrederTraversal(Node* root){
	queue<Node*> q;
	q.push(root);
	q.push(NULL);
	
	while(!q.empty()){
		Node* temp=q.front();
		q.pop();
		
		if(temp==NULL){
			cout<<endl;
			
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			cout<<temp->data<<" ";
			if(temp->left!=NULL){
				q.push(temp->left);
				
			}
			if(temp->right!=NULL){
				q.push(temp->right);
				
			}
		}
	}
}
void inorder(Node* root){
	
	//base case
	if(root==NULL){
		return ;
		
	}
	
	inorder(root->left);
	cout<<root->data<<" ";
	
	inorder(root->right);
	
	 
}
void preorder(Node* root){
	
	//base case
	if(root==NULL){
		return ;
		
	}
	cout<<root->data<<" ";
	preorder(root->left);
	
	
	preorder(root->right);
	
	 
}
void postorder(Node* root){
	
	//base case
	if(root==NULL){
		return ;
		
	}
	
	postorder(root->left);
	
	
	postorder(root->right);
	cout<<root->data<<" ";
	 
}
int main(){
	
	
	Node* root=NULL;
	root=buildTree(root);
	
	 
	 cout<<"printing the level order traversal output"<<endl;
	 levelOrederTraversal(root);
	 //1 3 7 -1 -1 11 -1 -1 5 17  -1 -1 -1  
	 
	 cout<<"inorder is--"<<endl;
	 inorder(root);
	 
	 cout<<endl;
	 cout<<"preorder is--"<<endl;
	 preorder(root);
	 cout<<endl;
	 
	 
	 cout<<"postorder is--"<<endl;
	 postorder(root);

}

