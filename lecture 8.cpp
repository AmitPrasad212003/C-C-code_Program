#include<iostream>
using namespace std;

int power(int a,int b){
	int ans =1;
	for(int i=1;i<=b; i++){
		ans=ans*a;
	}
	return ans;
	
}
//1 ->Even
//0-> odd

bool isEven(int a){
//	odd
	if(a&1){
		return 0;
	}
	else{
		return 1;
	}
}


int factorial(int n){
	int fact=1;
	for(int i=1; i<=n;i++)
	{
		fact= fact*i;
	}
	return fact;
	
}

int nCr(int n, int r)
{
	int num = factorial (n);
	int demo = factorial(r)*factorial(n-r);
	int ans= num/demo;
	return ans;
}


void printcounting(int n){
	for(int i=1; i<=n; i++)
	{
		cout<<i<<"  ";
	}
	cout<<endl;
}

//1-> prime number
//0-> not a prime number


//bool isprime(int n)
//{
//	for(int i=2; i<n; i++)
//	{
//		if(n%i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//
//}
int fibonacci(int n)
{
	int a = 0;
	int b = 1;
	cout<<a<<" "<<b<<" ";
	for(int i=1; i<=n; i++)
	{
		int nextnumber= a+b;
		cout<<nextnumber<<" ";
		a=b;
		b=nextnumber;
	}
	cout<<endl;
	
}
int locfibonacci(int n ){
	int a = 0;
	int b = 1;
	for(int i=1; i<=(n-2); i++)
	{
		int nextnumber= a+b;
		a=b;
		b=nextnumber;
	}
	cout<<endl;
	return  b;
	
}
//
//int AP(int a)
//{
//	int ap;
//	ap=((3*a)+7);
//	return ap;
//}

int main()
{
	
	int n;
	cout<<"Enter the n : ";
	cin>>n;
	fibonacci(n);
	cout<<"The element of fibonacci series of position "<<n<<" is : "<<locfibonacci(n);
	
	
	
	
	
	
	
	
	
	
//	int n;
//	cout<<"Enter the n : ";
//	cin>>n;
//	cout<<"AP of "<<n<<" is : "<<AP(n);
//	is prime or Not:
	
//	int p;
//	cout<<"Enter the p : ";
//	cin>>p;
//	printcounting(p);
//	if(isprime(p))
//	{
//		cout<<p<< " is Prime Number."<<endl;
//	}
//	else
//	{
//		cout<<p<<" is not a Prime NUmber."<<endl;
//	}
	
//	nCr------------:
//	int n,r;
//	cout<<"Enter the n : ";
//	cin>>n;
//	cout<<"Enter the r : ";
//	cin>>r;
//	 int ans = nCr(n,r);
//	 cout<<" The Value of "<<n<<"C"<<r<<" is : "<<ans;
	
	
	
//	int num;
//	cout<<"Enter the number : ";
//	cin >> num;
//	if(isEven(num)) {
//		cout<<"Number is Even "<<endl;
//	}
//	else
//	{
//		cout<<"Number the Odd "<<endl;
//	}
	
//	int a,b ;
	
//	cout<<"Enter the value of a : ";
//	cin>>a;
//	
//	cout<<"Enter the value of b : ";
//	cin>>b;
//	
//	char op;
//	cout<<"Enter the operation : ";
//	cin>>op;
//	
//	switch( op ){
//	
//		case '+': cout << (a+b) <<endl;
//				  break;
//		case '-': cout << (a-b) <<endl;
//				  break;
//		case '*': cout << (a*b) <<endl;
//				  break;
//		case '/': cout << (a/b) <<endl;
//				  break;
//		case '%': cout << (a%b) <<endl;
//				  break;
//		default: cout << " Enter the a valid opertaion" <<endl;
//	}

//	int Amt;
//	cout<<"Enter the Amount : ";
//	cin>>Amt;
//	int notes;
//	
//	switch(1){
//		case 1: notes=Amt/100;
//			   cout<<"No. of 100 notes are : "<<notes<<endl;
//			   notes=Amt-(notes*notes);
//		case 2 : notes=Amt/50;
//			   cout<<"No. of 50 notes are : "<<notes<<endl;
//			   notes=Amt-(notes*notes);
//		case 3 : notes=Amt/20;
//			   cout<<"No. of 20 notes are : "<<notes<<endl;
//			   notes=Amt-(notes*notes);
//		default : notes=Amt/1;
//			      cout<<"No. of 1 notes are : "<<notes<<endl;
//			      break;
//			  
	
	

//	int a ;
//	cout<<"Enter the a : ";
//	cin>>a;
//	int b;
//	cout<<"Enter the b : ";
//	cin>>b;
//	
//	int answer=power(a,b);
//	cout<<"power : "<<answer<<endl;
	
	}	



					  

	
	
	

	

