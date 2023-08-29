#include<iostream>
using namespace std;

/*
int binarysearch(int arr[],int n,int key){
	int start=0;
	int end=n-1;
	int mid=start+(end-start)/2;
	
	while (start<=end){
		
		if(key==arr[mid]){
			return mid;
		}
		if(key>arr[mid]){
			start=mid+1;
			
		}
		else if(key<arr[mid]){
			end=mid-1;
			
		}
		mid=start+(end-start)/2;
		
	}
	  return -1;
}

int main(){
	int arr[5]={3,5,9,13,27};
	
	int ans=binarysearch(arr,5,27);
	cout<<ans<<endl;
	return 0;

}
*/


/*
int firstoccurence(int arr[],int n,int key){
	
	int start=0;
	int end=n-1;
	int mid=start+(end-start)/2;
	int ans=0;
	
	while(start<=end){
		
		
		
		if(key==arr[mid]){
			 ans=mid;
			end=mid-1;
			
		}
		if(key>arr[mid]){
			start=mid+1;
			
		}
		
		else if(key<arr[mid]){
			end=mid-1;
			
		}
		mid=start+(end-start)/2;
		
	}
	return ans;
}
int lastoccurence(int arr[],int n,int key){
	
	
	
int start=0;
int end=n-1;
int mid=start+(end-start)/2;

int ans=0;
while(start<=end){
	
	
	if(key==arr[mid]){
		ans=mid;
		start=mid+1;
		
	}
	else if(key>arr[mid]){
		start=mid+1;
	}
	else if(key<arr[mid]){
		end=mid-1;
	}
	mid=start+(end-start)/2;
	
}
return ans;

}
int main(){
	
	
	int arr[5]={1,2,3,3,5};
	int first=firstoccurence(arr,5,3);
	int last=lastoccurence(arr,5,3);
	cout<<first<<endl;
	cout<<last<<endl;
	
	
}

*/

/*

int peak(int arr[],int n){
	
	
	int start=0;
	int end=n-1;
	int mid=start+(end-start)/2;
	
	while(start<end){
		
		if(	arr[mid]<arr[mid+1]){
			
			start=mid+1;
			
			
		}
		else if(arr[mid]>arr[mid+1]){
			end=mid;
		}
		
		mid=start+(end-start)/2;
		
	}
	return start;
	
}
int main(){
	
	
	int arr[5]={4,5,6,1,2};
	
	int answer=peak(arr,5);
	cout<<answer<<endl;
	
}

*/



int pivot(int arr[],int n){
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
	
	
	
	return end;
	
	
	
	

	
}
int main(){
	int arr[6]={7,8,9,1,2,3};
	int answer=pivot(arr,6);
	cout<<answer<<endl;
}































