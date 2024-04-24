#include<iostream>
using namespace std;

int main ()
{
	cout << "Namaste Dunia :-)"<<endl;
	cout << "Namaste Dunia :-)"<<"\n";
	
	int a= 23;
	cout<<a<<endl;
	char ch='v';
	cout<<ch<<endl;
	float f=1.2;
	cout<<f<<endl;
	bool bl=true;
	cout<<bl<<endl;
	double d=1.23;
	cout << d<< endl;
	
	int size=sizeof(a),	 sized=sizeof(ch),sizefloat=sizeof(f),sizedouble=sizeof(d);

	cout<<"size of intager is : "<<size<<endl;
	cout<<"size of char  is : "<<sized<<endl;
	cout<<"size of flaot  is : "<<sizefloat<<endl;	
	cout<<"size of double  is : "<< sizedouble<<endl;
	
	
	cout<<2.5/2<<endl;
	cout<<2/2.5<<endl;
	cout<<3/25<<endl;
	cout<<2/2<<endl;
	cout<<"\n"<<endl;
	
//Realation operators

	int A=2;
	int B=3;
	
	bool first=(A==B);
	cout<<first<<endl;
	
	bool second=(A<B);
	cout<<second<<endl;
	
	bool third=(A>B);
	cout<<third<<endl;
	
	bool fourth=(A<=B);
	cout<<fourth<<endl;
	
	bool fifth=(A>=B);
	cout<<fifth<<endl;
	
	bool sixth=(A!=B);
	cout<<sixth<<endl;
		cout<<"\n"<<endl;

//	logic operators 
	int b=0 ;
	int g=1;
	cout << !b<<endl;
    cout << !g<<endl;

	

	

}

