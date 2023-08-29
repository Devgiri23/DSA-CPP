#include <iostream>
using namespace std;

int reverse(char a[],int n){
    
    int s=0;
    int e=n-1;
    int count=0;
    while(s<=e){
     
       
         if( (a[s]==a[e]) && s!=e){
            s++;
            e--;
            count=count+2;
        }
        else if((a[s]!=a[e]) && s!=e){
            swap(a[s],a[e]);
            s++;
            e--;
        }
        else if((a[s]=a[e]) && s==e){
            count++;
            s++;
            e--;
            
        }
      
    }

    cout<<a<<endl;
    cout<<count<<endl;
}
int getlength(char a[]){
    
    int count=0;
    for(int i=0;a[i]!='\0';i++){
        count++;
        
    }
    return count;
    
}

int main() {
 char a[20];
 
 cin>>a;
 
 int len=getlength(a);
 
 reverse(a,len);
 

    return 0;
}