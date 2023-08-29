#include<iostream>
using namespace std;

void dummy(int n){
	n++;
	cout<<n<<endl;//N=4
	
}




int main(){
	int n;
	cin>>n;//N=3
	dummy(n);
	cout<<n<<endl;//N =3
	
	
}
//BOTH THE VALUE ARE DIFFRENT AT THE n IS NOT UPDATED BECAUSE IN DUMMY FUNCTION A COPY OF VARIABLE IS CREATED