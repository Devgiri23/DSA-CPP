#include<iostream>
using namespace std;


/*EXAMPLE ONE-----

int power(int a,int b){
	
	int ans=1;
	
	for(int i=1;i<=b;i++){
		ans=ans*a;
		
		
	}
	return ans;
	
	
}



int main(){
	int a,b;
	cin>>a>>b;
	
	
	int answer=power(a,b);
	cout<<answer<<endl;
	
	
	   
	return 0;
	
}*/
/*
//EXAMPLE TWO-----------------------------

int power(){
	int a,b;
	
	cin>>a>>b;
	
	
	int ans=1;
	for(int i=1;i<=b;i++){
		ans=ans*a;
		
	}
	return ans;
}

int main(){
	
	int anser=power();
	cout<<anser<<endl;  //by this you can call as many times as you want 
	
	//also you can use the variable ans which is used in function power it will not give error.
	
	int ans =power();
	cout<<ans<<endl;
	
	
	int e=power();
	cout<<e<<endl;
}*/



/*
//EXTENDED EXAMPLE ONE----

int power(int a,int b){
	
	int ans=1;
	
	for(int i=1;i<=b;i++){
		ans=ans*a;
		
		
	}
	return ans;
	
	
}



int main(){
	int a,b;
	cin>>a>>b;
	
	
	int answer=power(a,b);
	cout<<answer<<endl;
	int c,d;
	cin>>c>>d;
	
	int e=power(a,b);
	cout<<e<<endl;
	   
	return 0;
	
}*/


int power(int num1,int num2){ //these arguments may or may not be same as int main() method function calling args2
	
	int ans=1;    //THE VARIABLE USED IN THIS FUNCTION ARE LOCAL VARIABLE OF THIS FUNCTION ONLY .
	
	for(int i=1;i<=num2;i++){
		ans=ans*num1;
		
		
	}
	return ans;
	
	
}


	
int main(){
	int a,b;//ALL THESE VARIABLE ARE LOCAL VARIABLE OF MAIN FUNCTION ANF IT WILL GIVE ERROR IF YOU WANT TO ACCES THEM IN ABOVE FUNCTION.{IF YOU HAVNT DEFINE THEM FIRST}
	cin>>a>>b;
	
	
	int answer=power(a,b);
	cout<<answer<<endl;
	
	
	   
	return 0;
	
}