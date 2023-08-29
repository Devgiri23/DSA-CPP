#include<iostream>
using namespace std;


void selectionSort(int arr[],int n){
	
	for(int i=0;i<(n-1);i++){
		
		
		
		int minindex=i;
		
		
		
		for(int j=i+1;j<n;j++){
			
			
			if(arr[j]<arr[minindex]){
				
				minindex=j;
				
			}
		}
			if(minindex!=i){
			swap(arr[minindex],arr[i]);
			}
		}
		
	}

	
	void printarray(int arr[],int n){
		
		for(int i=0;i<n;i++){
			
			
			cout<<arr[i]<<" ";
			
		}
		
	}
	
	

int main(){
	
	int arr[5]={60,30,80,20,40};
	
	
selectionSort(arr,5);
printarray(arr,5);

}