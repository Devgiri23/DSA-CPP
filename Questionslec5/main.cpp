#include<iostream>
using namespace std;

int main(){
	
	
	int n;
	cout<<"enter the number n:--";
	cin>>n;
	
	/*  
	int count=0;
	int number =n;
	cout<<"the Number is :--"<<number<<endl;
	
	while(number>0){
      number=number/10;
	  
      count++;
		
	}
	cout<<count<<endl;
	
	int digit;
	
	int sum=0;
	int multiply=1;
	
	for(int i=1;i<=count;i++){
		int digit=n%10;
		 n=n/10;
		
		sum=sum+digit;
		multiply=multiply*digit;
		
	}
	cout<<sum<<endl;
	cout<<multiply<<endl;
	
	
	*/
	
	int digit;
	int sum=0;
	int multiply=1;
	
	while(n>0){
		digit=n%10;
		n=n/10;
		sum=sum+digit;
		multiply=multiply*digit;
		
	}
	cout<<sum<<endl;
	cout<<multiply<<endl;
	
	
	
	
	
}