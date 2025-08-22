#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
     for(int i=0;i<n;i++){
	string s;
	cin>>s;
	int c=0;
	for(int j=0;j<s.size();j++)
	{
	    if(s[j]=='<' && s[j+1]=='>')
	    c++;
	}
	cout<<c<<endl;
         
     }
	

}
