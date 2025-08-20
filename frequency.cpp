#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    bool m=true;
	    unordered_map<int,int>freq;
	    for(int i=0;i<2*n;i++)
	    {
	        int a;
	        cin>>a;
	        freq[a]++;
	        if(freq[a]>2)
	        m=false;
	    }
	    if(m)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}

}
