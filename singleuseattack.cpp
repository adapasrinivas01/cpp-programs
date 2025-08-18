#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a-c<=0)
	    cout<<1<<endl;
	    else
	     cout<<1+(int)ceil(((double)(a-c)/b))<<endl;
	    
	}

}
