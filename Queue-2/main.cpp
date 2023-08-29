#include<iostream>
using namespace std;
#include<queue>
#include<stack>
#include<deque>
#include<unordered_map>

//--------------------------------------Reverse the queue ----------------------------------------------------------------
//by stack
/*
queue<int> rev(queue<int> q)
{
    stack<int> s;
    
    while(!q.empty()) {
        int element = q.front();
        q.pop();
        s.push(element);
    }

    while(!s.empty()) {
        int element = s.top();
        s.pop();
        q.push(element);
    }
    return q;
}
int main(){
	queue<int> q;
	
	q.push(4);
	q.push(3);
	q.push(1);
	q.push(10);
	q.push(2);
	q.push(6);
	




	queue<int> ans=rev(q);

	while(!ans.empty()){
		cout<<ans.front()<<" ";
		ans.pop();
		
	}
	
	
}
*/
/*
// C++ code for reversing a queue
void rev(queue<int> &q ){
	
	//base case
	if(q.empty()){
		return ;
	}
	
	int num=q.front();
	
	q.pop();
	
	//recursive call
	
	rev(q);
	
	q.push(num);
	
	
	
}
void print(queue<int> q){
	
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	
}
int main(){
	queue<int> q;
	
	q.push(4);
	q.push(3);
	q.push(1);
	q.push(10);
	q.push(2);
	q.push(6);
	
	rev(q);
	
	print(q);

	
}*/



//=================================================================================================================================================
//---------------------------------------------First Neagtive integer in k window-----------------------------------------------------------------
/*
 vector<int> printFirstNegativeInteger(int A[],int N,int K){
	 deque<int> dq;
	 vector<int> ans;
	 
	 //process first window
	 for(int i=0;i<K;i++){
		 if(A[i]<0){
			 dq.push_back(i);
		 }
	 }
	 
	 //store ans for first window
	 
	 if(dq.size()>0){
		 ans.push_back(A[dq.front()]);
		 
	 }
	 else{
		 ans.push_back(0);
		 
	 }
	 
	 
	 //Now for remaining windows
	 
	 for(int i=K;i<N;i++){
		 //removal
		 if(!dq.empty() && i-dq.front()>=K){
			 dq.pop_front();
			 
		 }
		 //addition
		 if(A[i]<0){
			 dq.push_back(i);
			 
		 }
		 
		 if(dq.size()>0){
			 ans.push_back(A[dq.front()]);
		 }
		 else{
			 ans.push_back(0);
		 }
	 }
	 return ans;
	 
 }
 
 int main(){
	 
	 int A[5]={-8,2,3,-6,10};
	 
	 vector<int> answer=printFirstNegativeInteger(A,5,2);
	 int n=answer.size();
	 for(int i=0;i<n;i++){
		 cout<<answer[i]<<" ";
	 }
 }
 */
 
 //==============================================================================================================================================
 //---------------------------------Reverese First K element of Queue------------------------------------------------------------------------
 //Space Complexity will bew higher
 /*
 queue<int> modifyQueue(queue<int> &q,int k){
	 
	 stack<int> s;
	 
	 for(int i=0;i<k;i++){
		 int d=q.front();
		 q.pop();
		 s.push(d);
		 
	 }
	 queue<int> ans;
	 
	 while(!s.empty()){
		 int d=s.top();
		 s.pop();
		 ans.push(d);
		 
	 }
	 while(!q.empty()){
		 int d=q.front();
		 q.pop();
		 ans.push(d);
		 
	 }
	 return ans;
	 
	 
 }
 
 int main(){
	 queue<int> q;
	 q.push(1);
	 q.push(2);
	 q.push(3);
	 q.push(4);
	 q.push(5);
	 //int k=2;
	 
	 queue<int> ans=modifyQueue(q,2);
	 while(!ans.empty()){
		 cout<<ans.front()<<" ";
		 ans.pop();
	 }
 }*/
 
 
 /*
  queue<int> modifyQueue(queue<int> &q,int k){
	 
	 stack<int> s;
	 
	 for(int i=0;i<k;i++){
		 int d=q.front();
		 q.pop();
		 s.push(d);
		 
	 }
	 
	 
	 while(!s.empty()){
		 int d=s.top();
		 s.pop();
		 q.push(d);
		 
	 }
	 int t=q.size()-k;
	 while(t>0){
		 int d=q.front();
		 q.pop();
		 q.push(d);
		 t--;
	 }
	 return q;
	 
	 
 }
 
 int main(){
	 queue<int> q;
	 q.push(1);
	 q.push(2);
	 q.push(3);
	 q.push(4);
	 q.push(5);
	 //int k=2;
	 
	 queue<int> ans=modifyQueue(q,2);
	 while(!ans.empty()){
		 cout<<ans.front()<<" ";
		 ans.pop();
	 }
 }*/
 
 //=====================================================================================================================================================
//------------------------------------------------First Non Repeating Characters in a string--------------------------------------------------------
/*
string firstNonRepeatingString(string A){
	
	unordered_map<char , int> count;
	
	queue<int> q;
	
	string ans="";
	int n=A.length();
	for(int i=0;i<n;i++){
		
		
		
		char ch=A[i];
		
		count[ch]++;
		
		q.push(ch);
		
		while(!q.empty()){
			
			
			if(count[q.front()]>1){
				q.pop();
			}
			else{
				ans.push_back(q.front());
				break;
			}
			
		
			
		}
			if(q.empty()){
				ans.push_back('#');
				
			}
			
	
	}
	return ans;
	
}
int main(){
	
	string a="aabc";
	
	string answer=firstNonRepeatingString(a);
	
	int n=answer.length();
	for(int i=0;i<n;i++){
		cout<<answer[i]<<" ";
	}
}*/
//============================================================================================================================================
//------------------------------------------------------Circular Tour-------------------------------------------------------------------------
/*
class petrolPump{
public:
	int petrol;
	int distance;
};
int  tour(petrolPump p[],int n){
	
	int deficit=0;
	int balance=0;
	int start=0;
	
	for(int i=0;i<n;i++){
		
		balance=balance + p[i].petrol-p[i].distance;
		
		if(balance<0){
			deficit=deficit+balance;
			balance=0;
			start=i+1;
			
		}
 	}
	
	if(balance+deficit>=0){
		return start;
		
	}
	else{
		return -1;
	}
	
}
int main(){
	petrolPump arr[]={{4,6},{6,5},{7,3},{4,5} };
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
	int start=tour(arr,n);
	if(start==-1){
		cout<<"No solution"<<endl;
	}
	else{
		cout<<start<<endl;
	}
}
*/



//===================================================================================================================================
//-----------------------------------interleaving the first halves of the queue with second halves--------------------------
queue<int> interLeave(queue<int> &q){
	
	
	
	
	
	
}
