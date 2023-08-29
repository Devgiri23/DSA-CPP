#include<iostream>
using namespace std;
#include<queue>
#include<vector>

//---------------------------Zigzag traversal------------------------------------------------------------------------------
/*
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
vector<int> zigZag(Node* root){
	
	vector<int> result;
	if(root==NULL){
		return result;
		
	}
	
	queue<Node*> q;
	q.push(root);
	
	
	bool leftToRight=true;
	
	
	while(!q.empty()){
	
		int size=q.size();
		//making a temporary array
		vector<int> ans(size);
		
		for(int i=0;i<size;i++){
			
			Node* frontNode=q.front();
			q.pop();
			//kaise traversal krna h ltor ya rtol
			int index=leftToRight ? i:size-i-1;
			ans[index]=frontNode->data;
			
			
			if(frontNode->left!=NULL){
				q.push(frontNode->left);
				
			}
			
			if(frontNode->right!=NULL){
				q.push(frontNode->right);
			}
			
		}
		
		leftToRight=!leftToRight;
		
		for(auto i:ans){
			result.push_back(i);
		}
		
		
		
		
		
		
		
	}
	return result;
}



int main(){
	Node* root=NULL;
	
	root=buildTree(root);
	
	vector<int> answer=zigZag(root);
	int n=answer.size();
	for(int i=0;i<n;i++){
		cout<<answer[i]<<" ";
		
	}
}
*/

//==============================================================================================================
//----------------------------------Boundary traversal----------------------------------------------------------
/*


in register
*/



//======================================================================================================================



//-----------------Vertical Traversal of binary tree--------------------------------------------------------------------


































