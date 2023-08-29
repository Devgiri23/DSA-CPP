#include<iostream>
#include<vector>
using namespace std;

/*

//QUESTION-----REVERSE AN ARRAY


vector<int> reverse(vector<int> v){
	
	
	int s=0;
	int e=v.size()-1;
	
	
    while(s<=e){
		
		
		
			
			swap(v[s],v[e]);
			s=s+1;
			e=e-1;
		
		
	}
	return v;

}



void print(vector<int> v){
	int size=v.size();
	
	for(int i=0;i<size;i++){
		
		cout<<v[i]<<" ";
	}
	cout<<endl;
	
	
}
int main(){
	
	
	vector<int> v;
	
	
	v.push_back(11);
	v.push_back(7);
	v.push_back(3);
	v.push_back(12);
	v.push_back(4);
   cout<<"size of v is--"<<v.size()<<endl;
   cout<<v.at(0)<<endl;
   
   vector<int> ans=reverse(v);
   
   
   print(ans);
	    
	   
   }
    */


/*
//QUESTION----REVERSE AFTER CERTAIN POSITION M



vector<int> reverse(vector<int> v,int m){
	
	
	int s=m+1;
	int e=v.size()-1;
	
	
	while(s<=e){
		
		
		swap(v[s],v[e]);
		
		
		s=s+1;
		e--;
		
	}
	return v;
	
	
} 

void print(vector<int> v){
	int n=v.size();
	
	for(int i=0;i<n;i++){
		
		
		cout<<v[i]<<" ";
	}
	cout<<endl;
	
}





int main(){
	
	vector<int> v;
	
	
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	
	vector<int> ans=reverse(v,3);
	print(ans);
	return 0;
	
	
}
*/
/*
//QUESTION---MERGE TWO SORTED ARRAYS AND MAKE ONE SORTED ARRAY

void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
	
	int i=0;//array 1 ka index 0
	int j=0;//array2 ka index 0
	int k=0;//array 3 ka index 0
	
	while(i<n && j<m)
		{
		  
		
		
		if(arr1[i]<arr2[j]){
			
			arr3[k]=arr1[i];
			
			k++;
			i++;
			
			
		}
		
		
		
		
		else{
			
			
			arr3[k]=arr2[j];
			k++;
			j++;
		}
		
		
		
	}
	
	//COPY FIRST ARRAY REMAINING ELEMENT
	while(i<n){
		
		
		arr3[k]=arr1[i];
		k++;
		i++;
		
	}
	
	//COPY SECOND ARRAY REMAINING ELEMENT
	
	while(j<m){
		
		
		arr3[k]=arr1[j];
		k++;
		j++;
		
	}
	
	
	
}

void print(int ans[],int n){
	
	for(int i=0;i<n;i++){
		cout<<ans[i]<<" ";
		  main(){
	
	
	int arr1[5]={1,3,5,7,9};
	int arr2[3]={2,4,6};
	
	int arr3[8]={0};
	
	
	
	merge(arr1,5,arr2,3,arr3);
	print(arr3,8);
	
	
}*/


//QUESTION----MOVE ZEROES TO RIGHT



void movezeroes(vector<int>& nums){
	
	int i=0;
	
	int n=nums.size();
	for(int j=0;j<n;j++){
		
		if(nums[j]!=0){
			
			
			swap(nums[i],nums[j]);
			
			i++;
			
			
		}
	}
	
}

void print(vector<int>& ans ){
	
	int n=ans.size();
	
	for(int i=0;i<n;i++){
		
		cout<<ans[i]<<" ";
	}cout<<endl;
	
}
int main(){
	
	vector<int> v;
	v.push_back(0);
	v.push_back(1);
	v.push_back(3);
	v.push_back(12);
	v.push_back(0);
	v.push_back(0);
	
   movezeroes(v);
	print(v);
	
	
}

