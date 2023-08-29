#include<iostream>
using namespace std;

/*

//QUESTION-----FIND PIVOT IN ARRAY


int getPivot(int arr[],int n){
	
	
	int start=0;
	int end=n-1;
	
	int mid=start+(end-start)/2;
	while(start<end){
		
		if(arr[mid]>arr[0]){
			
			start=start+1;
		}
		else{
			end=mid;
		}
		 mid=start+(end-start)/2;
			
		
		
	}
	return start;
	
}


int main(){
	
	
int arr[5]={3,8,10,17,1};

cout<<"pivot is"<<getPivot(arr,5)<<endl;
}

*/

/*

//QUESTION :------ SAERCH IN ROATETED ARRAY



int getpivot(int arr[],int n){
	
	int start=0;
	int end=n-1;
	int mid=start+(end-start)/2;
	
	
	while(start<end){
		
		if(arr[mid]>arr[mid+1]){
			start=mid+1;
			
		}
		else{
			end=mid;
		}
		mid=start+(end-start)/2;
	}
	return start;
	
	
}
int binarysearch(int arr[],int s,int e,int key){
	
	int start=s;
	int end=e;
	
	int mid=start+(end-start)/2;
	
	while(start<=end){
		
		
		if(arr[mid]==key){
			return mid;
			
		}
	
		else if(arr[mid]<key){
			start=mid+1;
			
		}
		else{
			end=mid-1;
			
		}
       mid=start+(end-start)/2;
		
		
	}
	return -1;
	
	
}
int  findnum(int arr[],int n,int k){
	
	
	int pivot=getpivot(arr,n);
	
	if(k>=arr[pivot] && k<=arr[n-1]){
		return binarysearch(arr,pivot,n-1,k);
		
	}
	else{
		return binarysearch(arr,0,(pivot-1),k);
		
	}
}
int main(){
	int arr[5]={7,9,1,2,3};
	
	int hellpivot=getpivot(arr,5);
	cout<<hellpivot<<endl;
	
	int ans=findnum(arr,5,2);
	cout<<ans<<endl;
	
}
*/


//QUESTION--SQUARE ROOT USING BINARY SEARCH
long long int squarerootintegerpart(int n){
	int s=0;
	int e=n;
long long 	int mid=s+(e-s)/2;//LONG LONG IS WRITTEN BECAAUSE OF MAXIMUM INTEGER VALUE 2^31-1
	long long  int ans=-1;
	
	while(s<=e){
		int square=mid*mid;
		if(square==n){
			return mid;
			
		}
		else if(square>n){
			e=mid-1;
		}
		else if(square<n){
			 ans= mid;
			s=mid+1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
	
}
double decimalpart(int n,int precision,int tempsolution){
	
	double factor=1;
	double ans=tempsolution;
	for(int i=0;i<precision;i++){
		
		factor=factor/10;
		for(double j=ans;j*j<n;j=j+factor){
			ans=j;
		}
	}
	return ans;
}
int main(){
	int n;
	cin>>n;
	
	int temsolution=squarerootintegerpart(n);

	cout<<temsolution<<endl;
	
	cout<<"answer is "<<decimalpart(n,3, temsolution);
	
	
}