#include<iostream>
using namespace std;



int partition(int arr[],int s,int e){
	
	int pivot=arr[s];
	
	int count=0;
	//counting all the numbers that are less than pivot
	
	for(int i=s+1;i<=e;i++){
		if(arr[i]<=pivot){
			
			count++;
			
		}
		
	}
	//initialisng the first element of the array to its right position
	int pivotindex=s+count;
	swap(arr[pivotindex],arr[s]);
	//now left and right part sambhalo
	
	int i=s,j=e;
	
	while(i<pivotindex && j>pivotindex){
		
		while(arr[i]<pivot){
			i++;
		}
		
		while(arr[j]>pivot){
			j--;
			
		}
		
		if(i<pivotindex && j>pivotindex){
		
			swap(arr[i],arr[j]);
			i++;
			j--;
			
			
			
		}
	}
	
	return pivotindex;
	
}

void quicksort(int arr[],int s, int e){
	
	//base case
	if(s>=e){
		return ;
		
	}
	
	int p=partition(arr,s,e);
	
	//recursive call fopr sort the array of first part
	quicksort(arr,s,p-1);
	
	
	//recursive call to sort the last part of array
	
	quicksort(arr,p+1,e);
	
}
int main(){
	int arr[5]={2,4,1,6,8};
	
	int n=5;
	
      quicksort(arr,0,n-1);
	
	
	
	//printing the sorted array
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
		
	}
	cout<<endl;
	
}