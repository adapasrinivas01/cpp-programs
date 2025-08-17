#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b,x,y;
        cin>>a>>b;
        x=max(0,(500-(2*a)))+max(0,(1000-(4*(a+b))));
        y=max(0,(1000-(4*b)))+max(0,(500-(2*(a+b))));
        cout<<max(x,y)<<endl;
    }

}
