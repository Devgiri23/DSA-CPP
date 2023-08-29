#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
/*
bool checkifarrContainzero(vector<int> arr){
	int n=arr.size();
	for(int i=0;i<n;i++){
		if(arr[i]!=0){
			return 0;
			
		}
		else{
			return 1;
		}
	}
}
bool endcases(vector<int> arr)
{
	int n=arr.size();
	int s=0;
	int e=n-1;
	
	for(int i=1;i<e;i++){
		if(arr[s]==0 && arr[e]==0 && arr[s+1]!=0 && arr[e-1]!=0){
			return 1;
			
		}
		
			
		
		
		
		else{
			return 0;
			
		}
	}
	
	
	
}
bool second(vector<int> arr){
	int n=arr.size();
	int s=0;
	int e=n-1;
	for(int i=1;i<e;i++){
	if(arr[s]==0 && arr[e]!=0 && arr[s+1]!=0 && arr[e-1]!=0){
			return 1;
	}
	
	else if(arr[s]!=0 && arr[e]==0 && arr[s+1]!=0 && arr[e-1]!=0){
			return 1;
	}
	
	
}
}
vector<int> lengthWater(vector<int>& arr){
	int n=arr.size();
	sort(arr.begin(),arr.end());
	int largest=arr[n-1];
	int secondlargest= arr[n-2];
	vector<int> ans;
	
	int s=0;
	int e=n-1;
	
	int length=0;
	
	
	
	while(s<=e){
		if(endcases(arr) && checkif){
			ans.push_back(0);
		     s++;
		}
		
		 if(arr[s] < secondlargest ){
			length=secondlargest-arr[s];
			ans.push_back(length);
			
			
			s++;
		}
 		else if(secondlargest < largest 	`){
			ans.push_back(0);
			e--;
			
	
		
	}
	else{
		ans.push_back(0);
		s++;
	
	}
	}
	
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+ans[i];
	
	}
	cout<<sum<<endl;
	return ans;
	
	
}




int main(){
	vector<int> arr={0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
	
lengthWater(arr);

}*/

/*

vector<int> length(vector<int> arr){
	 
	 vector<int> ans;
	 int n=arr.size();
	 int s=0;
	 int e=n-1;
	 while(s<=e){
	  if(arr[s]==0 && arr[s+1]!=0){
		ans.push_back(0);
		s++;
	  }
	  else if(arr[e]==0 && arr[e-1]!=0){
		  ans.push_back(0);
		
	  }
	 }
	 
	 for(int i=0;i<n;i++){
		 cout<<ans[i]<<" ";
	 }
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+ans[i];
	
	}
	cout<<sum<<endl;
	 
	 return ans;
 }
 int main(){
	 vector<int> answer={0,1,0};
	 length(answer);
 }
 */
 
 
   int maxElement(int a[],int n){
        int s=0;
        int e=n-1;
        int maxi=0;
        while(s<=e){
            if(a[s]>=a[e]){
                maxi=a[s];
                e--;
            }
            else{
                maxi=a[e];
                s++;
                
            }
            
        }
		cout<<maxi<<endl;
        return maxi;
    }
    int minElement(int a[],int n){
       int s=0;
        int e=n-1;
        int mini=0;
        while(s<=e){
            if(a[s]<=a[e]){
                mini=a[s];
                e--;
            }
            else{
                mini=a[s];
                s++;
                
            }
            
        }
		cout<<mini<<endl;
		
        return mini;
    }
        
    
   
    int findSum(int arr[], int n)
    { 
        int sum=maxElement(arr,n)+minElement(arr,n);
        return sum;
            
    
    }
	int main(){
		int arr[5]={-2,1,-4,5,3};
		
		cout<<findSum(arr,5)<<endl;
	}
	