#include<iostream>
using namespace std;





/*

//this below code have soome changes the logic is correct but sometime the 
 mid=(start+end)/2 will give value which is exceeding the maximum value of integer i.e 2^31-1 
 suppose your start is of range 2^31-1 and same is end hence the start + end will give value exeeding 2^31-1 so here we have to slightly change the code to
by updating mid to:----  
mid=start+(end-start)/2;







int binarySearch(int arr[],int size,int key){
	
	int start=0;
	int end=size-1;
	
	int mid=(start+end)/2;
	
	while(start<=end){
		
		if(arr[mid]==key){
			
			return mid;
		}
		
		else if(key>arr[mid]){
			start=start+1;
		}
		else{
			end=end-1;
		}
		
		mid=(start+end)/2;
	}
		return -1;
		
		
	}
	int main(){
		
		int even[6]={1,3,6,17,19,27};
		
		int odd[5]={1,8,19,22,30};
		
		int evenindex=binarySearch(even,6,40);
		cout<<evenindex<<endl;
		
		
		int oddindex=binarySearch(odd,5,8);
		cout<<oddindex<<endl;
		
	}
	
*/	
	

int binarySearch(int arr[],int size,int key){
	
	int start=0;
	int end=size-1;
	
	int mid=start+(end-start)/2;
	
	while(start<=end){
		
		if(arr[mid]==key){
			
			return mid;
		}
		
		else if(key>arr[mid]){
			start=start+1;
		}
		else{
			end=end-1;
		}
		
		mid=start+(end-start)/2;
	}
		return -1;
		
		
	}
	int main(){
		
		int even[6]={1,3,6,17,19,27};
		
		int odd[5]={1,8,19,22,30};
		
		int evenindex=binarySearch(even,6,40);
		cout<<evenindex<<endl;
		
		
		int oddindex=binarySearch(odd,5,8);
		cout<<oddindex<<endl;
		
	}
	
	
	
	
	
