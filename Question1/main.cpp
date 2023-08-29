//character input and you have to tell whether the character is lowercase uppercase or number

#include<iostream>
using namespace std;

int main(){
       char ch;
	   cin>> ch;
	   
	   if (ch>=97 && ch<=122){
		   cout<< "character is lowercase"<<endl;
		   
	   }
	   else if(ch>=65 && ch<=126){
		   cout<<"character is uppercase"<< endl;
		   
	   }
	   else if(ch>=48 && ch<=57	){
		   cout<<"charter is number"<< endl;
		   
	   }
	   else {
		   cout<<"enter valid charcter"<<endl;
		   
	   }




}