#include<iostream>
#include<math.h>

using namespace std;
//int main(){
//	//Decimalnumber to binary conversion
//	
//	
//	int n;
//	cin>>n;
//	
//	int i=0;
//	int ans=1;
//	
//	while(n>0){
//		
//		
//		int bit=n&1;    
//		cout<<bit<<endl;
//		
//		if(bit==1){
//			ans=(bit*pow(10,i))+ans;
//			
//		}
//		i++;
//		n= n>>1;
//		
//		
//		
//	}cout<<ans<<endl;
//	
//	
//	
//}
int main(){
    int n;
    cin>>n;
      int ans=0;
     int i=0;
     while(n!=0){
         int bit=n&1;
         ans=(bit*pow(10,i))+ans; 
            n=  n>>1;
         i++;
    
     }
     cout<<ans<<endl;
}