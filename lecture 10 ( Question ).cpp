#include<iostream>
using namespace std;

void printarray(int arr[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void swap(int arr[])
{
	int temp,i;
	temp = arr[i];
	arr[i]=arr[i+1];
	arr[i+1]=temp;
}





void swapalternate(int arr[], int size)
{
	for(int i=0; i<size ; i+=2)
	{
		if(i+1 < size)
		{
			swap(arr[i],arr[i+1]);
			
		}
	}
}


int main()
{
	int even[8] = {3,23,34,56,6,67,75,53};
	int odd[5]={11,22,33,44,55};
	cout<<"Swaping alternate of Even size"<<endl;
	swapalternate(even, 8);
	printarray(even, 8);
	cout<<endl;
	cout<<"Swaping alternate of odd size"<<endl;
	swapalternate(odd, 5);
	printarray(odd, 5);
}












