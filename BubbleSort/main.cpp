#include<iostream>
using namespace std;

/*

void bubblesort(int arr[],int n){
	
	
	
	for(int i=1;i<n;i++){
		
		
		for(int j=0;j<n-i;j++){
			
			
			
			if(arr[j]>arr[j+1]){
				
				
				swap(arr[j],arr[j+1]);
				
				
			}
		}
		
	}
	
}
void printarr(int arr[],int n){
	
	for(int i=0;i<n;i++){
		
		
		cout<<arr[i]<<"  ";
		
	}
}



int main(){
	
	
	int arr[5]={60,30,40,1,9};
	
	bubblesort(arr,5);
	printarr(arr,5);
}
*/

//OPTIMISE SOLUTION


void bubblesort(int arr[],int n){
	
	
	
	for(int i=1;i<n;i++){         //for(int i=0;i<n-1;i++)
		bool swapped=false;
		
		for(int j=0;j<n-i;j++){     //for(int j=0;j<n-i-1;j++)
			
			
			
			if(arr[j]>arr[j+1]){
				
				
				swap(arr[j],arr[j+1]);
				swapped=true;
				
			}
		}
		if(swapped==false){
			break;
		}
		
	}
	
}
void printarr(int arr[],int n){
	
	for(int i=0;i<n;i++){
		
		
		cout<<arr[i]<<"  ";
		
	}
}



int main(){
	
	
	int arr[5]={60,30,40,1,9};
	
	bubblesort(arr,5);
	printarr(arr,5);
}