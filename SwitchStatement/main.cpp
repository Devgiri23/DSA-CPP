#include<iostream>
using namespace std;

int main(){
	
	/*SYNTAX-- 
	 switch(expression){
							case constant1:do something;
							break;
							case constant2:do something;
							break;
							default:do something;
								}
								  */
								  
				  
	/*if break is writeen then it will execute only that case but if it is not there  then it will execute allt he other cases
	 */
	
	
	
	
	 int num=2;
	 cout<<endl;
	 
	 switch(num){                                 //THE CASE WHOSE CONSTANST MACTHCES TO THE EXPRESSION VALUE WILL RUN.
	                                              
		 case 1:cout<<"firdt"<<endl;
		 break;
		 case 2:cout<<"Second"<<endl;
		 break;
		 default:cout<<"this is a default case"<<endl;
		 
	 }
}