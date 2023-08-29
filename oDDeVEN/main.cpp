#include<iostream>
using namespace std;



int main(){
	
	int a;
	
	cin>>a;
	
	
	/*
	if(a%2==0){
		cout<<"even"<<endl;
	}
	else{
		cout<<"odd"<<endl;
	}
	*/
	
	
	
	//ANOTHER METHOD
	
	
	if(a&1==1){
		cout<<"odd"<<	endl;
		
	}
	else{
		cout<<"even"<<endl;
	}
}