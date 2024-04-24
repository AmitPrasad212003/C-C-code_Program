#include<iostream>
using namespace std;

//----------------Linear search ---------------//

bool search(int arr[],int size,int key){
	for(int i=0;i<size; i++)
	{
		if(arr[i]==key)
		{
			return 1;
		}
	}
	return 0;
}

//--------------Printing Array reverse direct-----------------//
//void printarray(int arr[],int n)
//{
//	for(int i=(n-1); i>=0 ; i--)
//	{
//		cout<<arr[i]<<" ";
//	}
//	cout<<endl;
//}

//------------Print Array -----------------//
void printarray(int arr[],int n)
{
	for(int i=0; i<n ; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void reverse(int arr[],int n)
{
	int start = 0;
	int end = n-1;
	while(start<= end)
	{
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}

int main()
{
//	int arr[10]={5,6,4,6,23,34,11,21,34,56};
//	cout<<"Enter the element to search : "<<endl;
//	int key ;
//	cin>>key;
//	
//	bool found = search(arr,10,key);
//	
//	if(found)
//	{
//		cout<<" Key is Present "<<endl;
//	}
//	else{
//		cout<<"Key is not found"<<endl;
//	}
//	



	int arr[6]={1,2,3,4,12,45};
	int brr[5]={45,6,7,4,67};
	
//	reverse(arr,6);
//	reverse(brr,5);
	
	printarray(arr,6);
	cout<<endl;
	printarray(brr,5);

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
