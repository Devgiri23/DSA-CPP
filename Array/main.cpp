#include<iostream>
using namespace std;

int main(){
	
	//declare
	int number[15];
	
	
	//accessing an aray
	cout<<"value at index 14 is"<<number[14]<<endl;   //it will give garbage vale as nothing is stored in the array.
	
	
	//value above index
	//cout<<"value at index 20"<<number[20]<,endl;     //it will give error as to get index[20]element we have to create array atleast of size 21 but here number arrray if of size 15.
	
	
	
	//initialising an array
	int second[3]={3,5,7};
	
	
	//accessing an element
	cout<<"value at index 2   "<<second[2]<<endl;//output will be 7 as at index 2 the value is 7 0-3 1-5 2-7.
	
	
	
	
	int third[15]={2,7}; 
	int n=14;
	cout<<"printing the array"<<" ";
	
	for(int i=0;i<=n;i++){
		cout<<third[i]<<" "; //output will be 2 7 0  0 0 0 00 0 0 0 0 0 0 ...all these values are garbage values
		
	}
	cout<<endl;
	
	
	
	//initialising all locations with 0
	
	int fourth[10]={0};
	int num=10;
	cout<<"printing the array"<<" ";
	
	for(int j=0;j<=num;j++){
		cout<<fourth[j]<<" ";
	
	}
	
	
	//initialising with 1 is not possible with below line 
	
		int fifth[10]={0};
	num=10;
	cout<<"printing the array"<<" ";
	
	for(int j=0;j<=num;j++){
		cout<<fifth[j]<<" ";//1 0 0 0 0 0 0 0 0 0
	
	}
	cout<<endl;
	cout<<"everything is fine"<<endl;
	
	
	
	
	
	
}