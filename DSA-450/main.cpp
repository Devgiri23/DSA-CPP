#include<iostream>
using namespace std;
 


     void segregateElements(int arr[],int n)
    {
        
        
   
        for(int i=1;i<n;i++){
            
            for(int j=0;j<n-i;){
                
                if(arr[j]>=0){
                   j++;
                }
                
                else if(arr[j]<0 && arr[j+1]>=0){
                   
                    swap(arr[j],arr[j+1]);
                    j++;
                    
                    
                }   
                else if(arr[j]<0 && arr[j+1]<0){
                    j++;
                }
                  
            }
            
            
        }
   
   
   
   }
   int main(){
	   
	   int arr[9]={-12, 11, 0, -5, 6, -7, 5, -3, -6};
	   
	 segregateElements(arr,9);
	   for(int i=0;i<9;i++){
		   cout<<arr[i]<<" ";
	   }
   }