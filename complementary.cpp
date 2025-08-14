#include<iostream>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int j;
        cin>>j;
        string s;
        cin>>s;
        string r=s;
        for(int k=0;k<j;k++)
        {
             if(s[k]=='A')
             r[k]='T';
             else if(s[k]=='T')
             r[k]='A';
             else if(s[k]=='C')
             r[k]='G';
             else
             r[k]='C';
        }
        cout<<r<<endl;
       
    }
}
