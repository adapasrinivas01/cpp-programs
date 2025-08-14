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
	    if(a*100>=b)
	    cout<<0<<endl;
	    else if(((b-(a*100))%100)==0)
	    cout<<(b-(a*100))/100<<endl;
	    else
	    cout<<((b-(a*100))/100)+1<<endl;
	}

}
