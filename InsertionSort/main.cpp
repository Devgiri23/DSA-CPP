#include<iostream>
using namespace std;


void insertionsort(int arr[],int n){
	
	
	for(int i=1;i<n;i++){
		
		  
		int temp=arr[i];
		int j=i-1;
		for(;j>=0;j--){
			
			if(arr[j]>temp){
				
				arr[j+1]=arr[j];
				
			}
			else{
				break;
				
			}
			
		}
		arr[j+1]=temp;
	}
	
}
void printarr(int arr[],int n){
	
	for(int i=0;i<n;i++){
		
		
		cout<<arr[i]<<"  "	;	
	}
}



int main(){
	
	
	int arr[5]={60,30,40,1,9};
	
	insertionsort(arr,5);
	printarr(arr,5);
}