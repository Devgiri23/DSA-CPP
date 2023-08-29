#include<iostream>
using namespace std;


/*
int main(){
	
	
	
	char name[20];   //INITIALISING CHARACTER ARRAY
	
	cin>>name;  //TAKING INPUT IN CHAARACTER ARRAY
	cout<<"name is---"<<name<<endl;
	
	
	
	cout<<"INDEX 2 IS --"<<name[2]<<endl;
	
	cout<<"INDEX 7 IS --"<<name[7]<<endl; //IF YOU GIVE INPUT LOVE AND THE ANSWER OF THIS INDEX WILL BE NULL
	
	
	//CIN STOPS THE EXECUTION WHENEVER YOU WILL GIVE ITSPACE , TAB, NEWELINE CHARACTER WHILE ENTERING THE INPUT LIKE IF YOU GIVE LOVE BABBAR THE ONLY LOVE WILL GET PRINTED NOT BABBAR AS CIN NEVER READS SPACE IN STRINGS
}

*/



/*
//LENGTH OF STRING


int getLength( char name[]){
	
	int count=0;
	for(int i=0;name[i]!='\0';i++){
		count++;
	}
	return count;
	
}
int main(){
	
	
	char name[20];
	
	cin>>name;
	
	
	cout<<"length is ----"<<getLength(name)<<endl;
}
*/


/*
//QUES==== REVERSE A STRING


void reverse(char name[],int n){
	
	
	int s=0;
	int e=n-1;
	while(s<e){
		
		swap(name[s],name[e]);
			
			
			s++;
			e--;
			
		
		
	}cout<<name<<endl;
}

int getLength( char name[]){
	
	int count=0;
	for(int i=0;name[i]!='\0';i++){
		count++;
	}
	return count;
	
}
int main(){
	
	
	char name[20];
	cin>>name;
	
	
	int length=getLength(name);
	
	reverse(name,length);
	
	
	
	
}*/





//QUESTION-------CHECK PALINDROME


bool checkpalindrome(char name[],int n){
	
	
	int s=0;
	int e=n-1;
	
	while(s<=e){
		
		
		if(name[s]!=name[e]){
			
			return 0;
			
		}
		
	
		
		else{
			s++;
			e--;
		}
		
	}return 1;
	
}
int getLength(char name[]){
	
	
	int count=0;
	for(int i=0; name[i] != '\0'; i++){
		count++;
		
	}
	return count;


}


int main(){
	
	char name[20];
	cout<<"ENNTER THE STRING----"<<" ";
	
	cin>>name;
	
	
	int len=getLength(name);
	cout<<checkpalindrome(name,len)<<endl;
	return 0;
}