#include<iostream>
using namespace std;
int main(){
	
	
	
	
	
//Question1:-- CALCULATE SUM OF ALL NUMBERS FROM 1 TO N.


/*
 int n;
cin>>n;

int i=1;
int sum=0;

while(i<=n){
            sum=sum+i;
            i++;
	
	
}

          cout<<"sum is :"<<sum<< endl;

	   */
	   
	   
	   
//QUESTION:---GIVEN NUMBER IS PRIME OR NOT
int n;
cin>>n;

int i=2;
while(i<n){
	if(n%i==0){
		cout<<"nuber is not prime"<<endl;
		
	}
	else{ 
		cout<<"number is prime" << endl;
	}
	break;
	i++;
	
}

	
}