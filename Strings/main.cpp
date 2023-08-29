#include<iostream>
using namespace std;




/*

//QUESTION ----=======VALID PALINDROME


bool validcharacters(char ch){
	
	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9') ){
		return 1;
	}
	else {
		return 0;
		
	}
	
	
}

char toLowercase(char ch){
	
	if((ch>='a' && ch<='z') ||  (ch>='0' && ch<='9')){
		return ch;
	}
	else{
		char temp=ch-'A'+'a';
		return temp;
	}
}

bool checkpalindrome(string a){
	
	
	int s=0;
    int e=a.length()-1;
	while(s<=e){
		
		
		if(a[s]!=a[e]){
			return 0;
			
		}
		else{
			s++;
			e--;
			
		}
		
	
		
	}
	return 1;
	
}


bool ispalindrome(string s){
	string temp="";
	int n=s.length();
	for(int j=0;j<n;j++){
		
	if(validcharacters(s[j])){
		temp.push_back(s[j]);
		
	}
		
	}
	int b=temp.length();
	for(int j=0;j<b;j++){
		
		temp[j]=toLowercase(temp[j]);
		
	}
	return checkpalindrome(temp);
	
}
int main(){
	string s;
	cin>>s;
	
	cout<<ispalindrome(s)<<endl;
}*/



/*

//QUESTION--------MAXIMUM OCCURING CHARACTER IN STRING




char maxOccuringCharcter(string s){
	int arr[26]={0};
	int n=s.length();
	
	for(int i=0;i<n;i++){
		int number=0;
		char ch=s[i];
		number=ch-'a';
		arr[number]=arr[number]+1;
		
		
		
	}

	int maxi=-1;
	int ans=0;
	
	for(int i=0;i<26;i++){
		if(maxi<arr[i]){
	ans=i;
   maxi=arr[i];
		}
	}
	
	return 'a'+ans;

}


int main(){
	string s;
	cin>>s;
	cout<<maxOccuringCharcter(s)<<endl;
}*/



/*

//QUESTION----REPLACE SPACES WIH  @40


string replaceSpaces(string str){
	
	
	string temp="";
	int n=str.length();
	for(int i=0;i<n;i++){
		
		if(str[i]==' '){
			temp.push_back('@');
			temp.push_back('4');
			temp.push_back('0');
						

		}
			else{
				temp.push_back(str[i]);
				
			}
		
	}
	return temp;
	
	
	
}



int main(){
	string s;
	getline(cin,s);

//ANOTHER METHOD TO TAKE NPUT LIKE --MY NAME IS DEV

char s[20];
cin.getline(s,20);

//

	cout<<replaceSpaces(s);
	
}
*/




//QUESTION-----PERMUTATION IN STRIONG
bool checkvalue(int a[26],int b[26]){
	
	
	for(int i=0;i<26;i++){
		
		if(a[i]!=b[i])
			
			return 0;
			
		
	
	}
	
	return 1;
	
}



bool checkinclusion(string s1,string s2){
	
	
	
	int count1[26]={0};
	int n=s1.length();
	for(int i=0;i<n;i++){
		
		int index=s1[i]-'a';
		count1[index]++;
		
		
	}
	
	int count2[26]={0};
	
	int windowsize=s1.length();
	int i=0;
	int k=s2.length();
	
	while(i<windowsize && i<k){
		int index=s2[i]-'a';
		count2[index]++;
		i++;
		
	}
	if (checkvalue(count1,count2))
		return 1;
	
	while(i<k){
		char newchar=s2[i];
		int index=newchar-'a';
		count2[index]++;
		char oldchar=s2[i-windowsize];
		index=oldchar-'a';
		count2[index]--;
		i++;
			if (checkvalue(count1,count2))
		return 1;
	
	
		
	}
	return 0;


	
}

int main(){
	
	
	string s1;
	cout<<"enter s1--";
	cin>>s1;
	cout<<endl;
	string s2;
	cout<<"enters2---";
	cin>>s2;
	cout<<endl;
	
	cout<<checkinclusion(s1,s2)<<endl;
	
	
}

//THERE AARE TWO MORE QUESTION ---WHICH ARE IMPORTANT 1.REMOVE ALL ADJACENT DUPLICATE STRINGS .  2.STRING COMPRESSION ---ANSWER INM NOTEBOOK