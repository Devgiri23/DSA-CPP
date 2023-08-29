#include<iostream>
using namespace std;

/*
int main(){
	

	int i=5;
	
	//creating a refrence variable 
	int &j=i;
	
	
	i++;
	
	
	cout<<i<<endl;
	
	
	j++;
	
	cout<<i<<endl;


	
	
	
}
*/

//----------------------------------------------------------------------------------------------------------
//PASS BY REFRENCE
/*

int update(int& n){//refrence variable is being passed and no new memory or copy of variable is created
	
	n++;
	
	
	
}

int main(){
	
	int n=5;
	
	cout<<n<<endl;    //===== 5
	
	update(n);       
	
	cout<<n<<endl;    //=====6
	
	
}

*/
//----------------------------------------------------BAD PRACTICE RETURN BY REFERENCE-------------------------------------------------
/*
//THIS IS VERY BAD PRACTICE AS THE SCOPE OF VARIABLE WILL BVE OVE RWHEN THE BLOCK GETS  FINISHED THERE IS NOTING REMAIN TO PASSS 
int& func(int a){
	
	
	int num=a;
	int &num=ans;   //IT IS POSSIBLE THAT YOU WILLL NOT BNE ABLE TO ACCESSS THIS MEMORY
	//THESE ARE LOCAL VARIABLES
	return ans;
}*/
//-------------------------------------------------------------------------------------------------------------------


//CREATE A VARIABLE ARRAY


int getSum(int* arr,int n){
	
	
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+arr[i];
		
	}
	return sum;
	
}





int main(){
	
	
	int n;
	cin>>n;
	
	
	
	int* arr=new int[n];
	
	
	for(int i=0;i<n;i++){
		
		cin>>arr[i];
		
	}
	
	int ans=getSum(arr,n);
	cout<<ans<<endl;
	
}