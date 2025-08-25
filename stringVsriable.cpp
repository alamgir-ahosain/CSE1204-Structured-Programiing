#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int i=1;
    while(i<=t)
    {
        int n;
        cin>>n;
        string a,x,y,z;
        cin>>a;
        x="Alice";
        if(a==x)
        {
            if(n%2==1) cout<<"Case "<<i<<":"<<"Bob"<<endl;
            else cout<<"Case "<<i<<":"<<"Alice"<<endl;


        }
        else
        {
            if(n%2==1) cout<<"Case "<<i<<":"<<"Alice"<<endl;
            else cout<<"Case "<<i<<":"<<"Bob"<<endl;
        }
        i++;

    }
}
