#include<iostream>
using namespace std;


int main(){
	
	
/*QUESTION:-- PRINT THE SUM FROM 1 TO N.



int n;
cin>>n;

int sum =0;



for(int i=1;i<=n;i++){
	sum=sum+i;
	
	cout<<sum<<"  ";
}	
cout<<endl;
cout<<sum<<endl;
	*/
	
	
// Print Fibonacci series:


int n=10;
int a=0;
int b=1;
cout<<a<<" "<<b<<" ";

for(int i=1;i<=n;i++){
	int next=a+b;
	cout<<next<<" ";
    a=b;
b=next;
	
	
}	
	
}