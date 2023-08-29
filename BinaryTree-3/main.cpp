#include<iostream>
using namespace std;



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
	
	
    //cout<<"Enter the data :"<<endl;
	
	int data;
	cin>>data;
	
	root=new Node(data);
	
	if(data==-1){
		return NULL;
	}
	//cout<<"Enter Data for inserting in left of-"<<data<<endl;
	
	root->left=buildTree(root->left);
	
	//cout<<"Enter Data for inserting in right of-"<<data<<endl;
	
	root->right=buildTree(root->right);
	
	
	return root;
	
}
void inorder(Node* root,int &count){
	if(root==NULL){
		return ;
		
	}
	
	inorder(root->left,count);
	if(root->left==NULL && root->right==NULL){
		count++;
	}
	inorder(root->right,count);
}
int numofLeaf(Node* root){
	int count=0;
	
	inorder(root,count);
	
	return count;
	
}
int main(){
	Node* root=NULL;
	
	root=buildTree(root);
	
	cout<<"number is------------"<<numofLeaf(root);
}