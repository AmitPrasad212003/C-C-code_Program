#include<iostream>
using namespace std;

//void printArray(int arr[],int size){
//	cout<<"printing the array : "<<endl;
//	for(int i=0; i<size ; i++)
//	{
//		cout<<arr[i]<<" ";
//	}
//	cout<<endl<<"Printing Done !"<<endl;
//}
//
//int getmin(int num[], int n)
//{
//	int  minimum= INT_MAX;
//	for(int i=0; i<n; i++)
//	{
//		minimum = min(minimun, num[i]);
////				predefind function to find maximum
////		if(num[i]< min)
////		{
////			min= num[i];
////		}
//	}
//	return minimum;
//}
//
//int getmax(int num[], int n)
//{
//	int  maximum= INT_MIN;
//	for(int i=0; i<n; i++)
//	{
//		maximum=max(maximum, num[i]);
//
////		predefind function to find maximum
////		if(num[i]> max)
////		{
////			max= num[i];
////		}
//	}
//	return maximum;
//}


int sum(int arr[],int size)
{
	int sum=0;
	for(int i=0; i<size;i++)
	{
		sum=sum+arr[i];
	}
	return sum;
}

int main()
{
//	int arr[10]={-24}; 
//	printArray(arr,10)	;
//	int arrsize = sizeof(arr)/sizeof(int);
//	cout<<"The size of array is : "<<arrsize;

	int size;
	cout<<"Enter the size of array : ";
	cin>>size;
	int num[100];
	cout<<"Enter the element of Array : ";
	for(int i=0; i<size; i++)
	{
		cin>>num[i];
	}
	int suma = sum(num,size);
	cout<<"Sum of element of Array is : "<<suma;
	
//	
//	cout<<"Maximum value is "<<getmax(num,size)<<endl;
//	cout<<"minimum value is "<<getmin(num,size)<<endl;

	
	
	return 0;
}
