#include<iostream>
using namespace std;

int main(){
	
	int i=5;
	
	
	
	int* p=&i;
	
	
	
	int** p2=&p;
	
	cout<<"value of i---"<<i<<endl;
	
	cout<<endl;
	
	cout<<"value of p---"<<*p<<endl;
	
	cout<<endl;
	
	cout<<"------------------------------------------"<<endl;
	
	cout<<"printing the address of i---"<<&i<<endl;
	
	
	cout<<endl;
	
	cout<<"printing  p---"<<p<<endl;
	
	
	cout<<endl;
	cout<<"printing value of p2---"<<*p2<<endl;
	
	cout<<endl;
	
	cout<<"------------------------------------------"<<endl;
	
	
	cout<<"printing the address of p---"<<&p<<endl;
	
	
	cout<<endl;
	
	
	
	cout<<"printing p2---"<<p2<<endl;
	
	cout<<endl;
	
	cout<<"------------------------------------------"<<endl;
	
	cout<<"printing the address of p2---"<<&p2<<endl;
	
	
	cout<<"------------------------------------"<<endl;
	
	
	cout<<"value of i---"<<i<<endl;
	
	cout<<endl;
	
	cout<<"value of p---"<<*p<<endl;
	
	cout<<endl;
	
	
	cout<<"value of p2---"<<**p2<<endl;
	
	
	cout<<endl;
	
	cout<<"--------------------------------------------------------"<<endl;
	
}