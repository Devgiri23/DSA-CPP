#include<iostream>
using namespace std;


int score=15;

//THIS IS YOUR GLOBAL VARIABLE WHICH HAS A SCOPE GLOBALLY ALL FUNCTIONS IN THIS PROGRAM CAN ACCESS THIS VARIABLE 

void a(int& i){
	cout<<score<<endl;
	cout<<i<<endl;
	
}

int main(){
	int i=5;
	a(i);
}

//DONT USE THIS AS THIS HAS A DISADVANTAGE IT CAN BE CHANGED BY ANYONE AND IF ANY FUNCTIONN CHANGE IT THEN FOR ALL OTHER FUNCTION THE VALUE WILL GET CHANGED


//HENCE USE REFRENCE VARIABLE FOR SHARING OF VARIABLE