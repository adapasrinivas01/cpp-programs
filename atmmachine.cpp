 #include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    int a,b;
	    cin>>a>>b;
	    int rem=b;
	     for(int j=0;j<a;j++)
	     {
	         int c;
	         cin>>c;
	         if(rem>=c){
	         cout<<1;
	         rem-=c;}
	         else
	         cout<<0;
	         
	     }
	     cout<<endl;
	    
	}

}
