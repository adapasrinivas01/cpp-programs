#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    int a;
	    cin>>a;
	    if(a%5!=0)
	    cout<<-1<<endl;
	    else
	    cout<<(a/10)+((a%10)/5)<<endl;
	}
	return 0;

}
