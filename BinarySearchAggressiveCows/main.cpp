#include<iostream>
#include<array>
using namespace std;

bool ispossible(int arr[],int n,int mid){
	
	int cowcount=1;
	
	int lastpos=arr[0];
	for(int i=0;i<n;i++){
		
		
		if(arr[i]-lastpos>=mid){
			cowcount++;
			
			if(cowcount==n){
				return true;
			}
			lastpos=arr[i];
			
		}
	}
	return false;
	
	
	
}
int aggresivecow(int arr[],int n,int k){
	
	 
   
  sort(arr.begin(),arr.end());
   
   


int s=0;
int maxi=-1;
for(int i=0;i<n;i++){
	maxi=max(maxi,arr[i]);
	
}
int e=maxi;
int ans=-1;
int mid=s+(e-s)/2;

while(s<=e){
	
	if(ispossible(arr,n,mid)){
		ans=mid;
		s=mid+1;
		
	}
	else{
		e=mid-1;
		
	}
	mid=s+(e-s)/2;
	
	
}
return ans;

	
}

int main(){
	int arr[5]={3,1,2,4,6};
	
	int answer=aggresivecow(arr,5,2);
	cout<<answer<<endl;
}