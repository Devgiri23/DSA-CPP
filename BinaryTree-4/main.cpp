#include<iostream>
using namespace std;

//======================height of tree=======================================================================================================
/*
class Node{
public:
	int data;
	Node* left;
	Node* right;
	
	Node(int d){
		this->data=d;
		this->right=NULL;
		this->left=NULL;
	}
};


Node* buildtree(Node* root){
	
	cout<<"Enter the data"<<endl;
	
	int data;
	cin>>data;
	root=new Node(data);
	
	if(data==-1){
		return NULL;
		
	}
	cout<<"Enter the data for inserting in left of "<<data<<endl;
	root->left=buildtree(root->left);
	
	cout<<"Enter the data for inserting in right of"<<data<<endl;
	
	root->right=buildtree(root->right);
	
	return root;
	
}
int height(Node* node){
	 if(node==NULL){
		 return 0;
		 
	 }
	 int left=height(node->left);
	 int right=height(node->right);
	 int ans=max(left,right)+1;
	 return ans;
}
int main(){
	Node* root=NULL;
	
	root=buildtree(root);
	
	int ans=height(root);
	cout<<"height is--- "ans<<endl;
}*/
//==========================================================Diameter of tree=====================================================================
/*
class Node{
public:
	int data;
	Node* right;
	Node* left;
	
	
	Node(int data){
		this->data=data;
		this->right=NULL;
		this->left=NULL;
		
	}
};
Node* buildTree(Node* root){
	
	
	cout<<"Enter the data ";
	int data;
	cin>>data;
	root=new Node(data);
	
	if(data==-1){
		return NULL;
	}
	
	cout<<"enter the data for inserting in left of "<<data<<endl;
	root->left=buildTree(root->left);
	cout<<"enter the data for inserting in right of "<<data<<endl;
	root->right=buildTree(root->right);
	
	return root;
	
}

int height(Node* node){
	if(node==NULL){
		return 0;
	}
	int left=height(node->left);
	int right=height(node->right);
	int ans=max(left,right)+1;
	
	return ans;
}
int diameter(Node* root){
	if(root==NULL){
		return 0;
		
	}
	
	int op1=diameter(root->left);
	int op2=diameter(root->right);
	
	int op3=height(root->left)+height(root->right)+1;
	
	int ans=max(op1,max(op2,op3));
	
	return ans;
	
	
}
int main(){
	
	Node* root=NULL;
	
	root=buildTree(root);
	
	
	int answer=diameter(root);
	
	cout<<"diameter is --"<<answer<<endl; 
}*/
//-----------Second approach for diameter
/*
class Node{
public:
	int data;
	Node* right;
	Node* left;
	
	
	Node(int data){
		this->data=data;
		this->right=NULL;
		this->left=NULL;
		
	}
};
Node* buildTree(Node* root){
	
	
	cout<<"Enter the data ";
	int data;
	cin>>data;
	root=new Node(data);
	
	if(data==-1){
		return NULL;
	}
	
	cout<<"enter the data for inserting in left of "<<data<<endl;
	root->left=buildTree(root->left);
	cout<<"enter the data for inserting in right of "<<data<<endl;
	root->right=buildTree(root->right);
	
	return root;
	
}

pair<int,int> diameterFast(Node* root){
	
	if(root==NULL){
		pair<int,int> p=make_pair(0,0);
		return p;
	}
	
	pair<int,int> left=diameterFast(root->left);
	
	pair<int,int> right=diameterFast(root->right);
	
	int op1=left.first;
	int op2=right.first;
	
	int op3=left.second+right.second+1;
	
	pair<int,int> ans;
	
	ans.first=max(op1,max(op2,op3));
	ans.second=max(left.second,right.second)+1;
	
	return ans;
	
}
int diameter(Node* root){
	
	return diameterFast(root).first;
}
int main(){
	Node* root=NULL;
	
	root=buildTree(root);
	
	int ans=diameter(root);
	cout<<"diameter is--" <<ans<<endl;
}*/

//===============================Check for Balanced tree=========================================================================

//Approach-1
/*
class Node{
public:
	int data;
	Node* right;
	Node* left;
	
	
	Node(int data){
		this->data=data;
		this->right=NULL;
		this->left=NULL;
		
	}
};
Node* buildTree(Node* root){
	
	
	cout<<"Enter the data ";
	int data;
	cin>>data;
	root=new Node(data);
	
	if(data==-1){
		return NULL;
	}
	
	cout<<"enter the data for inserting in left of "<<data<<endl;
	root->left=buildTree(root->left);
	cout<<"enter the data for inserting in right of "<<data<<endl;
	root->right=buildTree(root->right);
	
	return root;
	
}
int height(Node* root){
	if(root==NULL){
		return 0;
	}
	int left=height(root->left);
	int right=height(root->right);
	
	int ans=max(left,right)+1;
	return ans;
	
}
bool isBalanced(Node* root){
	
	if(root==NULL){
		return true;
	}
	
	 bool left=isBalanced(root->left);
	 
	 bool right=isBalanced(root->right);
	 
	 bool diff=abs(height(root->left)-height(root->right))<=1;
	 
	 if(left && right && diff){
		 return true;
	 }
	 else{
		 return false;
	
	 }
}
int main(){
	Node* root=NULL;
	
	root=buildTree(root);
	
	cout<<"Tree is balanced --"<<isBalanced(root)<<endl;
}*/
//------------------------------ApproaCH-2
/*
class Node{
public:
	int data;
	Node* right;
	Node* left;
	
	
	Node(int data){
		this->data=data;
		this->right=NULL;
		this->left=NULL;
		
	}
};
Node* buildTree(Node* root){
	
	
	cout<<"Enter the data ";
	int data;
	cin>>data;
	root=new Node(data);
	
	if(data==-1){
		return NULL;
	}
	
	cout<<"enter the data for inserting in left of "<<data<<endl;
	root->left=buildTree(root->left);
	cout<<"enter the data for inserting in right of "<<data<<endl;
	root->right=buildTree(root->right);
	
	return root;
	
}

pair<bool,int> isBalancedfast(Node*root){
	 if(root==NULL){
		 pair<bool,int> p=make_pair(true,0);
		return p;
	}
	
	pair<bool,int> left=isBalancedfast(root->left);
	pair<bool,int> right=isBalancedfast(root->right);
	
	
	 bool leftAns=left.first;
	 
	 bool rightAns=right.first;
	 
	 bool diff=abs(left.second-right.second )<=1;
	 pair<bool,int> ans;
	 ans.second=max(left.second,right.second)+1;
	 
	if(leftAns && rightAns && diff){
		 ans.first=true;
	 }
	 else{
		 ans.first= false;
	
	 }
	 
	 return ans;
	 
}
bool isBalanced(Node* root){
	return isBalancedfast(root).first;
	
}
int main(){
	Node* root=NULL;
	
	root=buildTree(root);
	
	cout<<"Tree is balanced --"<<isBalanced(root)<<endl;
}*/
//=================================================Identical Tree==================================================================
/*
class Node{
public:
	int data;
	Node* right;
	Node* left;
	
	
	Node(int data){
		this->data=data;
		this->right=NULL;
		this->left=NULL;
		
	}
};
Node* buildTree(Node* root){
	
	
	cout<<"Enter the data ";
	int data;
	cin>>data;
	root=new Node(data);
	
	if(data==-1){
		return NULL;
	}
	
	cout<<"enter the data for inserting in left of "<<data<<endl;
	root->left=buildTree(root->left);
	cout<<"enter the data for inserting in right of "<<data<<endl;
	root->right=buildTree(root->right);
	
	return root;
	
}

bool isIdentical(Node* r1 ,Node* r2){
	if(r1==NULL && r2 ==NULL){
		return true;
	}
	if(r1!=NULL && r2 ==NULL){
		return false;
	}
	if(r1==NULL && r2 !=NULL){
		return false;
	}
	
	bool left=isIdentical(r1->left,r2->left);
	bool right=isIdentical(r1->right,r2->right);
	
	bool value=r1->data==r2->data;
	if(left && right && value){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	Node* root1=NULL;
	
	root1=buildTree(root1);
	
	Node* root2=NULL;
	
	root2=buildTree(root2);
	cout<<"Tree is identical --"<<isIdentical(root1,root2  )<<endl;
}*/
//=====================================Sum treee=================================================================
class Node{
public:
	int data;
	Node* right;
	Node* left;
	
	
	Node(int data){
		this->data=data;
		this->right=NULL;
		this->left=NULL;
		
	}
};
Node* buildTree(Node* root){
	
	
	cout<<"Enter the data ";
	int data;
	cin>>data;
	root=new Node(data);
	
	if(data==-1){
		return NULL;
	}
	
	cout<<"enter the data for inserting in left of "<<data<<endl;
	root->left=buildTree(root->left);
	cout<<"enter the data for inserting in right of "<<data<<endl;
	root->right=buildTree(root->right);
	
	return root;
	
}
pair<bool,int> isSumTree(Node* root){
	if(root==NULL){
		pair<bool,int> p=make_pair(true,0);
		return p;
	}
	
	if(root->left==NULL && root->right==NULL){
		pair<bool,int> p=make_pair(true,root->data);
		return p;
	}
	
	pair<bool,int> left=isSumTree(root->left);
	pair<bool,int> right=isSumTree(root->right);
	bool leftAns=left.first;
	bool rightAns=right.first;
	bool con=root->data== left.second+right.second;
	
	pair<bool,int> ans;
	if(leftAns && rightAns && con){
		ans.first=true;
		ans.second=2*root->data;
		
	}
	else{
		ans.first=false;
	}
	return ans;
	
}
bool isSumTreeFast(Node* root){
	return isSumTree(root).first;
}

int main(){
	Node* root=NULL;
	
	root=buildTree(root);
	
	cout<<"Summ tree or not --"<<isSumTreeFast(root)<<endl;
}