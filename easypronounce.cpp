#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int j=0;j<n;j++)
    {
        int a;
        string s;
        cin>>a;
        cin>>s;
        int cc=0;
        bool ch=false;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            cc=0;
            else
            {
            cc++;
               if(cc>=4){
                ch=true;
                 break;
               }
            }
        }
        if(ch)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
        
    }
}
