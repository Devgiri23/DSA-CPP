#include<iostream>
#include<unordered_map>
#include<map>
#include<vector>
#include<limits.h>
using namespace std;



int maximumFrequency(vector<int>& arr,int n){
	
	int size=arr.size();
	
	unordered_map<int,int> count;
	
	
	
	//storing the frequency of every elemnet in map count
	for(int i=0;i<size;i++){
		
		count[arr[i]]++;
		
	}
	int maxi=INT_MIN;
	int ans=-1;
	
	//traversing the unordered_map
	
	for(auto i: count){
		if(i.second>maxi){
			maxi=i.second;
			
			ans=i.first;
			
		}
		
	}
	return ans;
	 
	
	
}







int main(){
	
	vector<int> arr={1,2,1,3,1,2,1,2,4};
	cout<<maximumFrequency(arr,9)<<endl;
	
	
}