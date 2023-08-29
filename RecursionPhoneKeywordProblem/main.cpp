#include<iostream>

#include<vector>
using namespace std;
void solve(string digit,string output,int index,vector<string>& ans,string mapping[]){
	
	
	//base case
	int n=digit.size();
	
	if(index >= n){
		ans.push_back(output);
		
		return ;
	}
	int digitindex=digit[index ];
	
	int number=digitindex-'0';
	
	
	string value=mapping[number];
	int m=value.size();
	
	for(int i=0;i<m;i++){
		output.push_back(value[i]);
		
		solve(digit,output,index+1,ans,mapping);
		
		output.pop_back();
		
	}
}

vector<string> letterCombination(string digit){
     vector<string> ans;
	 int n=digit.size();
	  if(n==0)
		 return ans;
	 
	 string output="";
	 
	 int index=0;
	 
	
	 string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	 
	 solve(digit,output,index,ans,mapping);
	 
	 return ans;
	 
	 
	 
	 
	 
	
	
	}


int main(){
	
	
	
	
	
	
	string digit={'2','3'};
	
	vector<string> answer=letterCombination(digit);
	int m=answer.size();
	
	for(int i=0;i<m;i++){
		cout<<answer[i]<<" ";
		
	}
	cout<<endl;
	

	
	/*string digits={'2','3'};
	
	int n=digits.length();
	cout<<n<<endl;
	int index=0;
	int number=digits[index]-'0';
	cosut<<number<<endl;*/
}