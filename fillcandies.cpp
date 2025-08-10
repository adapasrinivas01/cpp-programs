#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(!(a%(b*c)))
	    cout<<(int)a/(b*c)<<endl;
	    else
	    cout<<(a/(b*c))+1<<endl;
	    
	}
       return 0;
}
