#include<iostream>
#include<math.h>

#include<limits.h>
using namespace std;


int main(){
	
	
//QUESTION:-----REVERSE A INTEGER and also the integer sholud not exxced the integer limits. 


int n;
cin>>n;

int i=0;
int digit;
int reverse=0;

while(n>0){
	
	          digit=n%10;
			  n=n/10;
			  reverse=reverse*10+digit;      //in exception case reverse*10 is creating problem so we have to bound it by  reverse>INT_MAX/10 i.e reverse810>INt_MAX  but this can again create problem so we will use reverse>INT_MAX/10
			  if((reverse>INT_MAX/10)||(reverse<INT_MIN/10)){
				  return 0;
			  }
			 
			
			  i++;
			    
                         	
					
	
}	
cout<<"reverse of the number is:--"<<reverse<<endl;
	
	
	
	
	
	
}