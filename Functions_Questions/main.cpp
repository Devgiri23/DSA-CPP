#include<iostream>
using namespace std;


/*
//QUESTION---NUMBER IS EVEN OR ODD.
 
  
  
  
  
bool isEven(){
	int a;
	cin>>a;
	if(a&1){
		return 0;
	}
	else{
		return 1;
	}
}
int main(){
	
	int answer=isEven();
	
	if(answer==0){
		cout<<"odd"<<endl;
		
	}
	else{
		cout<<"even"<<endl;
	}
	
}
*/

/*

//QUESTION NCR---

int fact(int n){
	
	int fact=1;
	
	
	for(int i=1;i<=n;i++){
		fact=fact*i;
	}
	return fact;
	
}
int nCr(int n,int r){
	
	int num=fact(n);
	int den=fact(r)*fact(n-r);
	int ans=num/den;
	return ans;
	
}
int main(){
	
	
	int n;
	cin>>n;
	int r;
	cin>>r;
	
	int answer=nCr(n,r);
	
	cout<<answer<<endl;
	
}
*/




/*QUESTION---- PRINT COUNTING


///FUNCTION SIGNATURE

void count(int n){//HERE VOID IS USED BECAUSE WE DONT HAVE TO RETURN ANY VALUE

	//FUNCTION BODY
	for(int i=1;i<=n;i++){
		
		cout<<i<<endl;
	}
	
	
}
int main(){
	
	int a;
	cin>>a;
	//FUNCTION CALLING
	count(a);
	
	
	
}

*/


//QUESTION ---IF A NUMBER IS PRIME OR NOT




bool prime(int n){
	int i=2;
	while(i<n){
		if(i%2==0){
			cout<<"number is not prime"<<endl;
			return 0;
		}
		else{
			cout<<"number is prime"<<endl;
			return 1;
		}
	}
	
}


int main(){
	int n;
	cin>>n;
	int ans=prime(n);
}