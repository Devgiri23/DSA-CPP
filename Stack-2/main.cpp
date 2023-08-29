#include<iostream>
using namespace std;
#include<stack>

class Stack{
public:
	int size;
	int* arr;
	int top;
	
	
	Stack(int size){
		this->size=size;
		arr=new int[size];
		top=-1;
		
	}
	
	
	void push(int element){
		//checking if there is any space available
		
		if(size-top>1){
			top++;
			arr[top]=element;
		}
		else{
			cout<<"stack Overflow"<<endl;
		}
	}
	
	void pop(){
		//checking if there is any element present in Stack
		
		if(top>=0){
			top--;
			
		}
		else{
			cout<<"Stack underflow"<<endl;
		}
	}
	
	
	int peek(){
		
		if(top>=0){
			return arr[top];
		}
		
		else{
			cout<<"stack is empty"<<endl;
			return -1;
		}
		
		
	}
	
	
	bool isEmpty(){
		if(top==-1){
			
			return true;
		}
		else{
			return false;
		}
	}
	
};

int main(){
	Stack st(5);
	st.push(22);
	st.push(24);
	st.push(25);
	st.push(26);
	st.push(27);
	st.push(28);
	
	
	cout<<"top element in stack is--"<<st.peek()<<endl;
	st.pop();
	cout<<"top element in stack is--"<<st.peek()<<endl;
	st.pop();
	cout<<"top element in stack is--"<<st.peek()<<endl;
	st.pop();
	cout<<"top element in stack is--"<<st.peek()<<endl;
	st.pop();		
	cout<<"top element in stack is--"<<st.peek()<<endl;
	st.pop();
	cout<<"top element in stack is--"<<st.peek()<<endl;
	
	if(st.isEmpty()){
		cout<<"Stack Empty"<<endl;
	}
	else{
		cout<<"stack not Empty"<<endl;
	}
	
}