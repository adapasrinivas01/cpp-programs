#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int hcf=0;
	for(int i=1;i<=min(a,b);i++)
	{
		if(a%i ==0 and b%i==0)
		hcf=i;
	}
	cout<<hcf<<endl;
}
