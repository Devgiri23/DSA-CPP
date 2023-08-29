#include<iostream>
using namespace std;

void printArray(int arr[],int size){
	for(int i=0;i<size;i++){
		
		cout<<arr[i]<<"";
	}
	cout<<"printing done"<<endl;
	
}

int main(){
	
        int one[10];
        int onesize=sizeof(one)/sizeof(int);//one block is of 4 size and there are 10 blocks hence 40/4 tjis 4 is size of integer or size of one block
  
	    cout<<onesize<<endl;

}