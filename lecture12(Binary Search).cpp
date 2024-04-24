#include<iostream>
using namespace std;

int binarysearch(int arr[], int size, int key)
{
	int start = 0;
	int end= size-1;
	
//	int mid = (start+end)/2;old ways


//	new chalakhi wala tarika for come in range of int 
	  
	int mid= start +(end-start)/2;
	
	while(start <= end)
	{
		if(arr[mid]==key)
		{
			return mid;
		}
//		 Go to right wala part 
//		 start= mid +1
		if(key > arr[mid])
		{
			start = mid+1;
		}
		//		 Go to left wala part 
//		end= mid -1;
		else
		{
			end= mid-1;
		}
		mid= start +(end-start)/2;
	}
	return -1;
}







int main()
{
	int even[6]={2,4,6,8,12,18};
	int odd[5]={3,5,7,9,11};
	
	int Evenindex = binarysearch(even,6,18);
	cout<<"Index of 18 is : "<<Evenindex<<endl;
	Evenindex = binarysearch(even,6,25);
	cout<<"Index of 25 is : "<<Evenindex<<"   NOt found"<<endl;
	
	
	int Oddindex = binarysearch(odd,5,11);
	cout<<"Index of 11 is : "<<Oddindex<<endl;

	return 0;
}
