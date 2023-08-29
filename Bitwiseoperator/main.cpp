#include<iostream>
using namespace std;
int main(){
	
	int a=4;
	int b=6;
	cout<< (a&b) <<endl;   //AND operator
	cout<<(a|b)<<endl;     //OR operator
	cout<<(~a)<<endl;      //Not operator
	cout<<(a^b)<<endl;     //XOR operator
	
	cout<<(17>>1)<<endl;  //Right Shift operator
	cout<<(17>>2)<<endl;   //Right Shift operator
	cout<<(19<<1)<<endl; //Left Shift operator
	cout<<(19<<2)<<endl; //Left Shift operator
	
	
	
	int i=7;
	
	
	cout<< (++i) <<endl;//8
	cout<< (i++) <<endl;//8 , i=9
	cout<< (i--) <<endl;//9 ,i=8
    cout<< (--i) <<endl;//7 ,i=7		

	
}