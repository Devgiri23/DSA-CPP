#include<iostream>
using namespace std;
#include<limits.h>
#include<vector>
/*

//-----------------QUESTION--SEARCH IN 2-D ARRAY-------------------------------------------------------------

bool ispresent(int arr[][4],int target,int row,int col){
	
	
	for(int row=0;row<3;row++){
		for(int col=0;col<4;col++){
			
			if(arr[row][col]==target){
				return 1;
				
			}
		}
	}
	return 0;
	
}


int  main(){
	
	int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	
	if(ispresent(arr,10,3,4)){
		cout<<" found"<<endl;
	}
	else{
		cout<<"not found"<<endl;
		
	}
	
	
	
}
*/





/*
//--------------------------------------------QUESTION----ROW WISE SUM-------------------------------------------------------




void rowwiseSum(int arr[][3],int row,int col){
	int sum=0;
	for(int i=0;i<row;i++){
		//YOU CAN ALSO INITIALISE INT SUM =0 HERE THEN YOU DONT HAVE TO UPDATE THE SUM=0 AT THE END;
		for(int j=0;j<col;j++){
			sum=sum+arr[i][j];
			
		}
		cout<<sum<<" ";
		sum=0;
		
		
		
		}
		
}


int main(){
	int arr[3][3];
	cout<<"enter the elements------";
	
	for(int row=0;row<3;row++){
		for(int col=0;col<3;col++){
			cin>>arr[row][col];
			
		}
	}
	
	rowwiseSum(arr,3,3);
}

*/


/*



//---------------------------------QUESTION----LARGEST ROW SUM-------------------------------------------------------------------


int largetsrowisesum(int arr[][3],int row,int col){
	int maxi=INT_MIN;
	int rowindex=-1;
	for(int i=0;i<row;i++){
		int sum=0;
		for(int j=0;j<col;j++){
			sum=sum+arr[i][j];
			
		}
		if(sum>maxi){
			maxi=sum;
			rowindex=i;
		}
		
		
		
		
		}
		cout<<" the max sum is---"<<maxi<<endl;
		return rowindex;
}


int main(){
	int arr[3][3];
	cout<<"enter the elements------";
	
	for(int row=0;row<3;row++){
		for(int col=0;col<3;col++){
			cin>>arr[row][col];
			
		}
	}
	
	cout<<largetsrowisesum(arr,3,3);
}
*/







/*

//----------------------QUESTION--------PRINT LIKE A WAVE-------------------------------------------------

void printwave(int arr[][3],int row ,int col){
	
	
	
	
	for(int i=0;i<col;i++){
		
		
		if(i&1){
			
			//odd index -> bottom to top
			for(int j=row-1;j>=0;j--){
				cout<<arr[j][i]<<" ";
				
			}
			
		}
			else{
				//even index->top to bottom
				for(int j=0;j<row;j++){
					cout<<arr[j][i]<<" ";
					
				}
			}
		
		
	}
}
int main(){
	int arr[3][3];
	
	cout<<" enter the element----";
	for(int i=0;i<3;i++){
		
		for(int j=0;j<3;j++){
			cin>>arr[i][j];
			
		}
		
	}
	
	
	
	printwave(arr,3,3);
}



*/

/*

//--------------------------------QUESTION-------SPIRAL PRINT-----------------------------------------------------------------


vector<int> spiralprint(vector<vector<int>>& matrix){
	vector<int> ans;
	
	int row=matrix.size();
	int col=matrix[0].size();
	
	int count=0;
	int total=row*col;
	
	
	int startingrow=0;
	int startingcol=0;
	int endingrow=row-1;
	int endingcol=col-1;
	
	
	
	while(count<total){
		
		//printing starting row
		for(int index=startingcol; index<=endingcol && count<total;index++){
			ans.push_back(matrix[startingrow][index]);
			count++;
			
		}
		startingrow++;
		
		//printing ending column
		for(int index=startingrow; index<=endingrow && count<total;index++){
			
			ans.push_back(matrix[index][endingcol]);
			count++;
			
		}
		endingcol--;
		
		
		//printing ending row
		
		for(int index=endingcol; index>=startingcol && count<total;index--){
			
			ans.push_back(matrix[endingrow][index]);
			count++;
		}
		endingrow--;
		//printing starting column
		for(int index=endingrow; index>=startingrow && count<total;index--){
			
			ans.push_back(matrix[index][startingcol]);
			count++;
			
		}
		startingcol++;
		
	}
	
	
	return ans;
}
int main(){
	 vector<vector<int> > a{ { 1, 2, 3, 4 },
                            { 5, 6, 7, 8 },
                            { 9, 10, 11, 12 },
                            { 13, 14, 15, 16 } };
 
    // Function call
    for (int x : spiralprint(a)) {
        cout << x << " ";
}
	

}


*/

//----------------------------QUESTION---BINARY SEARCH IN 2D ARRAY----------------------------------------------------------------


bool searchmatrix(int arr[][4],int row,int col,int target){
	
	
	int start=0;
	int end=row*col-1;
	
	
	int mid=start+(end-start)/2;
	
	
	while(start<=end){
		int element=arr[mid/col][mid%col];
		
		if(element==target){
			return 1;
			
		}
		else if(element < target){
			start=mid+1;
			
		}
		else if(element > target){
			end=mid-1;
		}
		
		mid=start+(end-start)/2;
		
		
	}
	return 0;
}

int main(){
  
     int arr[3][4];
	 
	 cout<<"enter the elements---";
	 
	 for(int i=0;i<3;i++){
		 for(int j=0;j<4;j++){
			 
			 cin>>arr[i][j];
			 
		 }
	 }
	 
	 
	 cout<<searchmatrix(arr,3,4,30);
	 

  	
}
	
	


























