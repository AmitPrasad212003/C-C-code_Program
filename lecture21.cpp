#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v)
{
	int s=0, e=v.size()-1;
	
	while(s<=e)
	{
		swap(v[s], v[e]);
		s++;
		e--;
	}
	
	return v;
}

void print(vector<int> v)
{
	for(int i=0; i<v.size(); i++)
	{
		cout<< v[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	vector<int> v;
	
	v.push_back(11);
	v.push_back(23);
	v.push_back(32);
	v.push_back(12);
	v.push_back(43);
	vector<int> ans;
	cout<<" Printing  Array : ";
	print(v);
	
	ans = reverse(v);
	
	cout<<" Printing reverse Array : ";
	print(ans);
	
}
