#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    int a,b;
	    cin>>a>>b;
	    if(a%b==0 && (a/b)%2==0) 
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}

}
