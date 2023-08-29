#include<iostream>
using namespace std;
#include<stack>
#include<vector>
//----------------------------------------Reverse the string using stack----------------------------------------------------------------------
/*
int main(){
	
	
	string str="babbar";
	
	
	stack<char> s;
	
	
	int n=str.length();
	for(int i=0;i<n;i++){
		char ch=str[i];
		s.push(ch);
		
	}
	string ans="";
	
	while(!s.empty()){
		 char ch=s.top();
		 ans.push_back(ch);
		 s.pop();
		 
		 
	}
	cout<<"answer is--"<<ans<<endl;
	
	
}
*/


//=============================================================================================================================================================
//-------------------------------------------------------Delete Middle element from stack------------------------------------------------------------------
/*
void solve(stack<int> &inputstack,int count,int size){
	
	//base case
	if(count==size/2){
		inputstack.pop();
		return ;
		
	}
	
	int num=inputstack.top();
	inputstack.pop();
	
	
	//Recursive call
	
	solve(inputstack,count+1,size);
	
	//jab vapas aaunga 
	
	inputstack.push(num);
	
	
	
}
void deleteMiddle(stack<int>& inputstack ,int N){
	int count =0;
	
	solve(inputstack,count,N);
	
}
int main(){
	
	int arr[6]={1,2,3,4,5,6};
	stack<int> s;
	
	for(int i=0;i<6;i++){
		int num=arr[i];
		s.push(num);
	}
	for(int i=0;i<6;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	deleteMiddle(s,6);
	vector<int> ans;
	while(!s.empty()){
		int num=s.top();
		ans.push_back(num);
		s.pop();
	}
	
	
	for(int i=4;i>=0;i--){
		cout<<ans[i]<<" ";
	}

	
}
*/

//========================================================================================================================================================
//---------------------------------------------VALID PARENTHESIS----------------------------------------------------------------------------------------

/*
bool isValidParenthesis(string expression){
	
	int n=expression.length();
	stack<char> s;
	for(int i=0;i<n;i++){
		
		
		char ch=expression[i];
		
		//if opening bracket stack push
		//if closing bracket stack pop
		
		if(ch=='(' || ch=='{' || ch=='['){
			s.push(ch);
			
		}
		else{
			//for closing bracket
			if(!s.empty()){
				
				char top=s.top();
				if((ch==')' && top==')') || (ch=='}' && top=='{' ) || (ch==']' && top=='[')){
					s.pop();
					
				}
				else{
					return false;
				}
				
			}
			else{
				return false;
			}
			
		}
		
	}
	if(s.empty()){
		return true;
	}
	else{
		return false;
		
	}
	
	
	
}




int main(){
	string exp="[{}])";
	
	cout<<isValidParenthesis(exp)<<endl;
}


*/

//===========================================================================================================================================
//-------------------------------------Insert an element at it bottom of stack---------------------------------------------------------
/*
void solve(stack<int>& mystack,int x ){
	
	if(mystack.empty()){
		mystack.push(x);
		return ;
		
	}
	int num=mystack.top();
	mystack.pop();
	
	solve(mystack,x);
	mystack.push(num);
	
}



stack<int> pushAtBottom(stack<int>& mystack,int x){
	
	

	
	
	solve(mystack,x);
	return mystack;
	

	
}


int main(){
	stack<int> s;
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	
	pushAtBottom(s,10);
	
	vector<int> ans;
	while(!s.empty()){
		int num=s.top();
		ans.push_back(num);
		
		s.pop();
		
	} 
	for(int i=4;i>=0;i--){
		cout<<ans[i]<<" ";
	}
}

*/

//======================================================================================================================================
//-----------------------------------Reverse stack using recursion---------------------------------------------------------------------

/*
void insertAtBottom(stack<int> &stack,int element){
	//bnase case
	if(stack.empty()){
		stack.push(element);
		return ;
		
		
	}
	
	int num=stack.top();
	stack.pop();
	
	insertAtBottom(stack,element);
	stack.push(num);
	
}
void reverseStack(stack<int> &stack){
	
	if(stack.empty()){
		return ;
		
	}
	
	int num=stack.top();
	stack.pop();
	
	//recursive call
	
	reverseStack(stack);
	
	insertAtBottom(stack,num);
	
	

	
}
int main(){
	stack<int> stack;
	for(int i=0;i<=4;i++){
		stack.push(i);
	}


	reverseStack(stack);
	
	
	while(!stack.empty()){
		cout<<stack.top()<<" ";
		stack.pop();
		
	}
}

*/

//========================================================================================================================================================
//------------------------------------------Sort a stack--------------------------------------------------------------------------------------------
/*


void insertSort(stack<int>& s,int num){
      if(s.empty() || (!s.empty() && s.top()<num) ){
		  s.push(num);
		  return ;
		  
	  }
	  
	  int n=s.top();
	  s.pop();
	  
	  insertSort(s,num);
	  s.push(n);
	
}

void SortStack(stack<int>& s){
	
	if(s.empty()){
		return ;
		
	}
	
	int num=s.top();
	s.pop();
	
	SortStack(s);
	
	insertSort(s,num);
	
	
}
int main(){
	stack<int> s;
	s.push(8);
	s.push(10);
	s.push(1);
	s.push(2);
	s.push(99);
	
	SortStack(s);
	
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
}
*/
//========================================================================================================================================================

//-------------------------------------------------Redudant brackets-------------------------------------------------------------------------------
 
/*

bool  findRedundantBrackets(string& s){
	
	stack<char> st;
	
	int n=s.length();
	
	for(int i=0;i<n;i++){
		char ch=s[i];
		
		//if ch is opening bracket or an operator
		
		if(ch=='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/'){
			st.push(ch);
		}
		
		
		else{
			//ch is closing brackets
			
			if(ch==')'){
				bool isredundant=true;
				
				while(st.top()!='('){
					char top=st.top();
					
					if(top=='+' || top=='-' || top=='*' || top=='/'){
						isredundant=false;
						
					}
					st.pop();
					
				}
				
				if(isredundant==true){
					return true;
				}
					st.pop();
				
			
				
			}
		}
		
	}
	return false;
}

int main(){
	string s="((a+b))";
	
	cout<<findRedundantBrackets(s)<<endl;;
}*/

//========================================================================================================================================================
//------------------------------------------Minimum Cost to make a string valid--------------------------------------------------------------------------------------------


int findMinimumCost(string str){
	
	//odd condition
	int n=str.length();
	 if(n%2==1){
		 return -1;
	 }
	 
	 stack<char> s;
	 //FIRST REMOVING VALIP PART
	 for(int i=0;i<n;i++){
		 
		 char ch=str[i];
		 //CH OPENING BRACES H
		 if(ch=='('){
			 s.push(ch);
			 
		 }
		 
		 //CH closing braces BRACES  H
		 else{
			 
			 if(!s.empty() && s.top()=='('){
				 s.pop();
				 
			 }
			 //top element closing braces tha
			 else{
				 s.push(ch);
			 }
			 
		 }
		 
	 }
	 //STACK CONTAING INVALID EXPRESSION ONLY NOW
	 int a=0;
	 int b=0;
	 while(!s.empty()){
		 
		 if(s.top()== '('){
			 b++;
		 }
		 else{
			 a++;
		 }
		 s.pop();
	 }
	 int ans=(a+1)/2+(b+1)/2;
	 
	 return ans;
	 
	 
}

int main(){
	
	string s="{{{{}}";
	
	cout<<findMinimumCost(s)<<endl;
}









