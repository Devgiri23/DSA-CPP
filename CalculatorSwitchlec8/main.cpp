#include<iostream>
using namespace std;

int main(){
	
	
	int a;
	cout<<"a is:--";
	cin>>a;
	cout<<endl;
	int b;
	cout<<"b is:--";
	cin>>b;
	
	cout<<endl;
	char op;
	cout<<"operation is:---";
	cin>>op;
	
	
	switch(op){
		
		case '+':cout<<(a+b)<<endl;
		break;
		
		case '*':cout<<(a*b)<<endl;
		break;
		
		case '-':cout<<(a-b)<<endl;
		break;
		
		case '/':cout<<(a/b)<<endl;
		break;
		default:cout<<"enter valiod operation"<<endl;
		
		
	}
	
	
	
	
}

