#include<iostream>
using namespace std;
#include<math.h>
//---------------------------------------------QUES1--FIBBONACCI SERIES------------------------------------------------------------
/*
int main(){
  int n;
  cin>>n;
  
  int a=0;
  int b=1;
  int next=0;
  cout<<a<<" "<<b<<" ";
  
  
  for(int i=0;i<n;i++){
	  next=a+b;
	  cout<<next<<" ";
	  a=b;
	  b=next;
	  
	  
  }
	
}
*/






/*
//=================================================================================================================================
//------------------------------------QUES2--N integer return difference between the product of digit and sum of digit------------

int main(){
	int n;
	cin>>n;
	int num=n;
	int count=0;
	while(num>0){
		num=num/10;
		count++;
		
	}
	cout<<"count is --"<<count<<endl;
	
	
	int sum=0;
	int product=1;
	
	
	int digit=0;
	for(int i=0;i<count;i++){
		digit=n%10;
		sum=sum+digit;
		
		product=product*digit;
		
		n=n/10;
		
		
		
	}
	cout<<sum<<endl;
	cout<<product<<endl;
	
	int difference=product-sum;
	cout<<difference<<endl;
	
} 
*/

/*
//================================================================================================================================================
//----------------------------------------------------DECIMAL TO BINARY CONVERSION---------------------------------------------------------
int main(){
	
	//int n;
	//cin>>n;
	
	
	
	cout<<(5&1)<<endl;
	cout<<(4&1)<<endl;
	
	int n;
	cout<<"enter the number---";
	cin>>n;
	cout<<endl;
	
	
	int ans=0;
	int i=0;
	while(n>0){
		
		int bit=n&1;
		cout<<"bit--"<<bit<<endl;
		ans=(bit*pow(10,i))+ans;
		//right shift n
		cout<<"ans----"<<ans<<endl;
		n=(n>>1);
		cout<<"n is--"<<n<<endl;
		i++;
		
		cout<<"anot ans is"<<ans<<endl;
	}
	cout<<"final--"<<ans<<endl;
}*/



/*
//===============================================================================================================================
//-------------------------------------BINARY TO DEECIMAL----------------------------------------------------------------
int main(){
	
	
	
	int n;
	cin>>n;
	
	
	
	int ans=0;
	int i=0;
	while(n>0){
		
		int digit=n%10;
		ans=digit*pow(2,i)+ans;
		n=n/10;
		i++;
		
	}
	
	cout<<ans<<endl;
}*/


/*
//===============================================================================================================================
//------------------------------------------REVERSING THE DIGIT-------------------------------------------------------------


int main(){
	
	int n;
	cin>>n;
	
	int ans=0;
	int i=0;
	
   while(n>0){
	  
	   int digit=n%10;
	   
	   ans=ans*(10)+digit;
	   
	   n=n/10;
	   i++;
	   
	
   }
	cout<<ans<<endl;
	
}*/

/*
//==============================================================================================================
//------------------------------------------QUES 6--TOTAL AMOUNT 1330 YOU HAVE TO TELL HOW MANY 100,50,20,10 ARE REQUIRED-----------------------------------


int main(){
	
	int n;
	cin>>n;
	
	switch(n>=100){
		case 1:cout<<"number of 100 required-"<<n/100<<endl;
		n=n%100;
		break;
	}
	switch(n>=50)	{
		case 1:cout<<"number of 50 required-"<<n/50<<endl;
		n=n%50;
		break;
	}
		
	switch(n>=20){
		case 1:cout<<"number of 20 required-"<<n/20<<endl;
		n=n%20;
		break;
	}
	switch(n>=10){
		case 1:cout<<"number of 10 required-"<<n/10<<endl;
		n=n%10;
		break;
	}
	
}*/
/*
//==================================================================================================================================
//------------------------------------------------------power of number a^b----------------------------------------------------------

int power(int a,int b){
	
	int ans=1;
	for(int i=0;i<b;i++){
		ans=ans*a;
		
	}
	return ans;
	
}

int main(){
	int a;
	cin>>a;
	int b;
	cin>>b;
	cout<<power(a,b)<<endl;
	
}*/

/*
//==================================================================================================================
//---------------------------------even or odd of a number---------------------------------------
void evenOdd(int n){
	if(n&1){
		cout<<"odd"<<endl;
	}
	else{
		cout<<"even"<<endl;
	}
}
int main(){
   int n;
   cin>>n;
   
   evenOdd(n);
   
   
}
*/


//==================================================================================================================================
//------------------------------------------------combination ncr of a number--------------------------------------------------------
int factorial(int n){
	int fact=1;
	
	for(int i=1;i<=n;i++){
		
		fact=fact*i;
		
		
		
	}
	return fact;
	
}
int combination(int n,int r){
 
	
	int numerator=factorial(n);
	int denominator=factorial(r)*factorial(n-r);
	
	int answer=numerator/denominator;
	
	return answer;
	
}
int  main(){
	int n;
	cin>>n;
	
	int r;
	cin>>r;
	
	int answer=combination(n,r);
	cout<<answer<<endl;
}