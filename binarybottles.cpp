#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
      int a,b,c,d,ans;
      cin>>a>>b>>c;
      d=log2(a);
      ans=(d*b)+(d-1)*c;
      cout<<ans<<endl;
  }
}
