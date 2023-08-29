#include<iostream>
using namespace std;


int main(){
	
	int num=5;
	 cout<<" value of num is--"<<num<<endl;
	 //accesing the num address
	 
	 cout<<"address of num is--"<<&num<<endl;
	 
	//creating a pointer
	int *p=&num;   //p is a pointer to int
	
	
	//'p'--some address is saved in p.
	//'*p'means value at address  pointed by p.
	
	cout<<"what will be printed"<<p<<endl;
	
	
	cout<<"value of pointer is "<<*p<<endl;
	
	
	cout<<"size of integer ---"<<sizeof(num)<<endl;
	
	cout<<"size of pointer---"<<sizeof(p)<<endl;//will be 4 or 8 depends on system but it is 8 in maximum cases also it will not change if you change the dtatatype of pointer
	
	
	int arr[10]={1,2,3,4};
	
	cout<<sizeof(arr)<<endl;
  	char ch[5]={'a','b','c','d','e'};
}