#include<iostream>
using namespace std;
#include<stack>
#include<vector>
#include<limits.h>

//---------------------------------------------------next Smaller element------------------------------------------------------
/*
vector<int> nextSmaller(vector<int>& arr,int n){
	
	stack<int> s;
	s.push(-1);
	
	
	vector<int> ans(n);
	
	for(int i=n-1;i>=0;i--){
		
		int curr=arr[i];
		while(s.top()>=curr){
			s.pop();
		}
		
		ans[i]=s.top();
		
		s.push(curr);
		
	}
	return ans;
}
int main(){
	vector<int> arr={2,1,4,3};
	vector<int> ans=nextSmaller(arr,4);
	cout<<"{";
	for(int i=0;i<4;i++){
		cout<<ans[i]<<" ";
	} 
	cout<<"}"<<endl;
	
	
}*/



//===============================================================================================================================================
//-----------------------------------------Largest area of rectangle in histogram------------------------------------------------------
/*
vector<int> nextSmallerElement(vector<int>& arr,int n){
	
	stack<int> s;
	s.push(-1);
	
	vector<int> ans(n);
	
	for(int i=n-1;i>=0;i--){
		
		int curr=arr[i];
		
		while(s.top()!=-1 && arr[s.top()]>=curr){
			s.pop();
		}
		
		ans[i]=s.top();
		s.push(i);
	
	}
	
	
	return ans;
	
	
}

vector<int> prevSmallerElement(vector<int>& arr,int n){
	
	
	stack<int> s;
	s.push(-1);
	
	vector<int> ans(n);
	
	
	for(int i=0;i<n;i++){
		
		int curr=arr[i];
		
		while(s.top()!=-1 && arr[s.top()]>=curr){
			s.pop();
		}
		
		ans[i]=s.top();
		s.push(i);
	}
	return ans;
	
}

int  largestRectangeleArea(vector<int> heights){
	
	int n=heights.size();
	
	vector<int> next(n);
	next=nextSmallerElement(heights,n);
	
	vector<int> prev(n);
	prev=prevSmallerElement(heights,n);
	
	
	
	int area=INT_MIN;
	
	for(int i=0;i<n;i++){
		
		
		int l=heights[i];
		
		if(next[i]==-1){
			next[i]=n;
		}
		
		int b=next[i]-prev[i]-1;
		
		int newArea=l*b;
		
		area=max(area,newArea);
		
		
		
	}
	return area;
}

int main(){
	vector<int> height={2,1,5,6,2,3};
	cout<<largestRectangeleArea(height)<<endl;
}*/

//======================================================================================================================================================
//----------------------------------------------The Celebrity Problem-------------------------------------------------------------------
bool knows(vector<vector<int>>& M,int a,int b,int n){
	
	if(M[a][b]==1){
		return true;
	}
	else{
		return false;
	}
}

int celebrity(vector<vector<int>>& M,int n){
	
	//step1:Create A stack
	
	stack<int> s;
	
	
	//step2:push all the values in stack
	for(int i=0;i<n;i++){
		s.push(i);
		
	}
	//step3:compare two elements
	while(s.size()>1){
		
		int a=s.top();	
		s.pop();
		
		int b=s.top();
		s.pop();
		
		if(knows(M,a,b,n)){
			s.push(b);
		}
		else{
			s.push(a);
		}
		
		}
		
		
		//step4:only one element remains in stack now which can be potential celeb so verify it
		
		
		int ans=s.top();
		cout<<ans<<endl;
		bool rowcheck=false;
		
		int zerocount=0;
	    for(int i=0;i<n;i++){
			if(M[ans][i]==0){
				zerocount++;
			}
		}
		
		if(zerocount==n){
			rowcheck = true;
		}
		
		bool colcheck=false;
		int onecount=0;
		
		for(int i=0;i<n;i++){
			if(M[i][ans]==1){
				onecount++;
			 }
		}
		
		if(onecount==(n-1)){
			colcheck=true;
		}
		
		if(rowcheck==true && colcheck==true){
			return ans;
			
		}
		else{
			return -1;
		}
	
}


int main(){
	
int n=3;

 vector<vector<int>> M={{0,1,0},{0,0,0},{0,1,0}};
   int answer=celebrity(M,n);
   cout<<answer<<endl;

}
