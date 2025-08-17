#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	     if(a*d>b*c)
	    cout<<"Alice\n";
	    else if(a*d<b*c)
	    cout<<"Bob\n";
	    else
	    cout<<"Equal\n";
	}
}
	     
