#include<iostream>
using namespace std;

void printArray(int arr[],int size){
	
	for(int i=0;i<size;i++){
		
		cout<<arr[i]<<endl;
		
	}
	cout<<"printing done"<<endl;
	
}
int main(){
	
	
	int one[10]={2,7};
	
	
	printArray(one,10);
}