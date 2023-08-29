#include <iostream>
using namespace std;

// QUESTION------FIRST AND LAST POSITION OF ELEMENT IN SORTED ARRAY

int firstoccurence(int arr[], int size, int key)
{

	int start = 0;
	int end = size - 1;

	int mid = start + (end - start) / 2;

	int ans = -1;

	while (start <= end)
	{

		if (arr[mid] == key)
		{

			ans = mid;
			end = mid - 1;
		}
		else if (arr[mid] > key)
		{
			end = mid - 1; // leftmost part
		}
		else if (arr[mid] < key)
		{
			start = mid + 1;
		}

		mid = start + (end - start) / 2;
	}
	return ans;
}

int lastoccurence(int arr[], int size, int key)
{

	int start = 0;
	int end = size - 1;
	int mid = start + (end - start) / 2;
	int ans = -1;

	while (start <= end)
	{

		if (arr[mid] == key)
		{
			ans = mid;
			start = start + 1;
		}
		else if (arr[mid] > key)
		{

			end = end - 1;
		}
		else if (arr[mid] < key)
		{
			start = start + 1;
		}
		mid = start + (end - start) / 2;
	}
	return ans;
}

int main()
{

	int arr[5] = {1, 3, 3, 3, 5};

	int first = firstoccurence(arr, 5, 3);
	int last = lastoccurence(arr, 5, 3);

	cout << "index of firstoccurence--" << first << endl;

	cout << "index of lastoccurence--" << last << endl;
}

// QUESTION---PEAK INDEX IN MAOUNTAIN ARRAY

/*

int peak(int arr[],int size){

	int start=0;
	int end=size-1;

	int mid=start+(end-start)/2;


	while(start<end){

		if(arr[mid]<arr[mid+1]){
			start=mid+1;


		}

		else{
			end=mid;

		}
		mid=start+(end-start-1);
	}
	return start;
}



int main(){

	int arr[5]={1,3,5,4,2};

	int ans=peak(arr,5);
	cout<<ans<<endl;
}*/