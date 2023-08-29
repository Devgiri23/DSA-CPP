#include<iostream>
using namespace std;
#include<stack>

int main(){
	
	//creating a stack
	stack<int> s;
	
	
	//inserting an element in stack
	
	s.push(2);
	s.push(4);
	
	
	//removing element from stack
	s.pop();
	
	//top element
	cout<<"top element is ---"<<s.top()<<endl;
	
	//stack is empty or not
	if(s.empty()){
		cout<<"stac is empty"<<endl;
	}
	else{
		cout<<"stack is not empty"<<endl;
	}
	
	
	//stck size
	cout<<s.size()<<endl; 
	
}
