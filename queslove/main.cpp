#include<iostream>
using namespace std;

/*
int maxvalue(int arr[],int n){
    int s=0;
    int e=n-1;
    int maxans=arr[s];
    while(s<=e){
        if(arr[s]>=maxans){
            maxans=arr[s];
           

        } 

          s++;
        
   
    }
	     return maxans;
}

  int minvalue(int arr[],int n){
    int s=0;
    int e=n-1;
    int minans=arr[s];
    while(s<=e){
        if(arr[s]<=minans){
            minans=arr[s];
            
            
        }
        s++;
    
    }
    
    return minans;
    
}
int sumOfMaxMin(int arr[], int n){
  int k=minvalue(arr,n);
  int m=maxvalue(arr,n);
  int sum=k+m;

	return sum;
	// Write your code here.
}
int main()
{
	int a[1]={-1 };
	
	cout<<sumOfMaxMin(a,1);
	//cout<<maxvalue(a,6);
	//cout<<minvalue(a,6);
	
}*/


 void sortthearr(int a[],int n){




	for(int i=0;i<n;i++){
		int temp;
		

		if(a[i]>=a[i+1]){
			a[i]=temp;
		cout<<a[temp]<<" ";

             
		}
		else{
			a[]=
		}
		   
			i++;
	}
		
}

int main(){
	int a[5]={1,3,2,6,5};
	
	sortthearr(a,5);
}
