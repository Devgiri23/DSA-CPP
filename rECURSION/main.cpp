#include<bits/stdc++.h>
using namespace std;


/*

//---------------------------FACTORIAL OF A NUMBER-----------------------------------------

int factorial(int n){
	
	if(n==0){
		return 1;
	}
	
	else{
		return n*factorial(n-1);
	}
	
	
	
}


int main(){
	int n;
	cin>>n;
	
	int ans=factorial(n);
	cout<<ans<<endl;
	
}
*/

//================================================================================================================================
/*


//-------------------------------------POWER OF2----------------------------------------------

int power(int n){
	
	
	if(n==0){
		return 1;
	}

	else{	   
		
		
		// return 2*power(n-1);
		  
			int small=power(n-1);
	         int big=2*small;
			 return big;
			 
	}
	
}
int main(){
	int n;
	cin>>n;
	
	int ans=power(n);
	cout<<ans<<endl;
	
}*/

//=======================================================================================================


//--------------------------------------------print counting-------------------------------------------------------
/*
void print(int n){
	
	if(n==1){
		cout<<n<<endl;                     INPUT-5
		                                   OUTPUT-5 4 3 2 1
		
	}
	
	else{
		cout<<n<<" ";
		print(n-1);
	
	}
}

int main(){
	int n;
	cin>>n;
	
	print(n);
	
}

*/
//ANOTHER WAY---same as above both are tail recursion---
/*
void print(int n){
	
	if(n==0){
		return ;
		
		
		                             INPUT-5
									 OUTPUT-5 4 3 2 1
	}
	
	else{
		cout<<n<<" ";
		print(n-1);
	
	}
}

int main(){
	int n;
	cin>>n;
	
	print(n);
	
}
*/




//ANOTHER WAY ---HEAD RECURION
/*
void print(int n){
	
	if(n==0){
		return ;

							        //   INPUT-5
									// OUTPUT-1 2 3 4 5 
	}
	
	else{
		
		print(n-1);           //WE JUST CHANGE THIS LINE
		cout<<n<<" ";
	
	}
}

int main(){
	int n;
	cin>>n;
	
	print(n);
	
}
*/

//=============================================================================================================================
//-----------------------------------------------FIBBONACCI SERIES-----------------------------------------------------------
/*
  
 //WITH FOR LOOP
int main(){
	
	
	int n;
	cin>>n;
	int a=0;
	int b=1;
	cout<<a<<" "<<b<<" ";
	for(int i=0;i<n;i++){
		int next=a+b;
		cout<<next<<" ";
		a=b;
		b=next;
	}
}*/

//with recursion---
 
/*
int recursionfibbo(int n){
	
	if(n==0){
		return 0;
		
		
		
		
	}
	else if(n==1){
		return 1;
		
		
	}
	else{
		int ans= recursionfibbo(n-1)+recursionfibbo(n-2);
		return ans;
		
		
	}
	
		

	

	
 }
int main(){
	int n;
	cin>>n;
	
	cout<<recursionfibbo(n)<<endl;
	
}



*/

//===================================================================================================================================
//------------------------------------------------COUNT NUMBER OF WAYS TO CLIMB STAIRS-------------------------------------------------
/*
int countways(int n){
	if(n<0){
		return 0;
		
	}
	else if(n==0){
		return 1;
	}
	
	else{
		int ans=countways(n-1)+countways(n-2);
		return ans;
	}
}
int main(){
	int n;
	cin>>n;
	
	cout<<countways(n)<<endl;
	
	
}*/


//==================================================================================================================================
/*
//----------------------------------------------SAY DIGIT---------------------------------------------------------------------------

void saydigit(int n,string arr[]){
	if(n==0){
		return ;
		
	}
	else{
		int digit=n%10;
		n=n/10;
		saydigit(n,arr);
		cout<<arr[digit]<<" ";
	}
}

int main(){
	
	
	string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	int n;
	cin>>n;
	saydigit(n,arr);
	
}*/


//============================================================================================================================================
//-------------------------------ARRAY IS SORTED YES OR NO BY RECURSION--------------------------------------------------------------
/*
bool checksorted(int arr[],int n){
	
	if(n==0){
		return 1;
		
	}
	else if(n==1){
		return 1;
		
	}
	
	
	else if(arr[0]>arr[1]){
	
		return 0;
		
	}

  else{
	n--;
	bool ans=checksorted(arr+1,n-1);
	return ans;
	
  }
	
 
	
	
	
	
}
int main(){
	
	int n;
	cin>>n;
	
	int arr[100];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	
	cout<<checksorted(arr,n);
	
	
	
}



*/



//===========================================================================================================================
//--------------------------------LINEAR SEARCH USING RECURSION--------------------------------------------------------
/*by while loop
bool searchelement(int arr[],int n,int key){
	int s=0;
	int e=n-1;
	
	while(s<=e){
		if(arr[s]==key){
			return 1;
			
			

		}

		s++;
		
		
	}
	return 0;
	
	
}

*/



/*

bool searchelement(int arr[],int n,int key){

	
	if(n==0){
		return 0;
		
	}
	else if(arr[0]==key){
		return 1;
	}
	
	
	
	searchelement(arr+1,n-1,key);
	
}

int main(){
	  int n;
      cin>>n;
	
	int arr[100];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	int key;
	cin>>key;
	
	
 int ans=	searchelement(arr,n,key);
 if(ans){
	 
	 cout<<"present"<<endl;
	 
 }
 else{
      cout<<"absent"<<endl;	 
 }
 
}*/





//=====================================================================================================================
//-----------------------------------------BINARY SEARCH USINMG RECURSION---------------------------------------------------------------
/*by while loop
bool binarysearch(int arr[],int n,int key){
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;
	
	
	
	
	while(s<=e){
		if(arr[mid]==key){
			return 1;
			
		}
		
		else if(arr[mid]<key){
			s=mid+1;
			
			
		}
		else{
			e=mid-1;
			
		}
		
		mid=s+(e-s)/2;
		
	}
	return 0;
	
}
  */
 
 
 /*
 
 bool binarysearch(int arr[],int n,int s,int e,int key){
	 bool answer;
	 int mid=s+(e-s)/2;
	 if(s>e){
		 return 0;
	 }
	 else if(arr[mid]==key){
		 return 1;
		 
		 
	 }
	 else if(arr[mid]<key){
		 answer= binarysearch(arr,n,mid+1,e,key);
		 
	 }
	 else{
		answer= binarysearch(arr,n,s,mid-1,key);
		 
		 
		 
	 }
	 return answer;
	 
	 
 }

int main(){
	  int n;
      cin>>n;
	
	int arr[100];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	int key;
	cin>>key;
	int e=n-1;
	int s=0;
	//cout<<binarysearch(arr,n,s,e,key)<<endl;
	int answer=binarysearch(arr,n,s,e,key);
	
	if(answer){
		cout<<"present"<<endl;
		
	}
	else{
		cout<<"absent"<<endl;
	}
}

*/


//=========================================================================================================================
//-------------------------------reverse a string---------------------------------------------------------------------
/*by loop
void reverse(string s){
	int start=0;
	int end=s.length()-1;
	
	while(start<=end){
		swap(s[start],s[end]);
		start++;
		end--;
		
	}
	cout<<s<<endl;
   
	
}
int main(){
	
	string s;
	getline(cin,s);
	
	
	
	reverse(s);
	
	
}
*/
/*

void reverse(string s,int start,int end){
	

	if(end==0 && start>end){
		cout<<s<<endl;
	}
	
	swap(s[start],s[end]);
	reverse(s,start+1,end-1);
}


int main(){
	string s;
	getline(cin,s);
	int start=0;
	int end =s.length()-1;
	
	
	reverse(s,start,end);
	
}

*/
//================================================================================================================================================
//--------------------------------CEHCK PALINDROME-----------------------------------------------------------------------------------------------
/*by while loop
bool palindrome(string s,int start,int end){
	
	
    while(start<=end){
		if(s[start]!=s[end]){
			return 0;
		}
		else{
			return 1;
			
		}
	} 
}*/
/*

bool palindrome(string s,int start,int end){
	if(start>end){
		return 1; 
		
	}
	else if(s[start]!=s[end]){
		return 0;
		
	}
	else{
		return 1;
		
	}
	palindrome(s,start+1,end-1);
}
int main(){
	string s;
	getline(cin,s);
	int start=0;
	int end =s.length()-1;
	
	
	cout<<palindrome(s,start,end);
	
}



*/



//=========================================================================================================================================
//-----------------------------------------------POWERSET OF SET-----------------------------------------------------------------------
/*
void solve(vector<int> nums,vector<int> output,int index,vector<vector<int>>& ans){//here ans is refrence variable
	int n=nums.size();
	
	//base case
	if(index>=n){
		ans.push_back(output);
		return ;
	}
	
	//exclude case
	solve(nums,output,index+1,ans);
	
	
	//include
	int element=nums[index];
	output.push_back(element);
	
	solve(nums,output,index+1,ans);
	
}
vector<vector<int>> subsets(vector<int>& nums){
	vector<vector<int>> ans;
	vector<int>output;
	
	int index=0;
	solve(nums,output,index,ans);
	return ans;
	
}

int main(){
	vector<int> nums={1,2,3};
	
	
	
	vector<vector<int>> answer=subsets(nums);
	int n=answer.size();
	
	for(int i=0;i<n;i++){
		for(int j=0;j<answer[i].size();j++){
			cout<<answer[i][j]<<" ";
			
		}
		cout<<endl;
	}
}



*/


