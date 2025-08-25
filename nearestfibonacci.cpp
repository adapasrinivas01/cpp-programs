#include<iostream>
using namespace std;
int main()
{
	int n;
    cin>>n;
	int fib1=0,fib2=1;
	while(fib2<n)
	{
		int temp=fib2;
		fib2=fib1+fib2;
		fib1=temp;
	}
	int d1=abs(n-fib1);
	int d2=abs(n-fib2);
	if(d1<d2)
	cout<<fib1<<endl;
	else if(d1>d2)
	cout<<fib2<<endl;
	else
	cout<<fib1<<" " <<fib2<<endl;
}
