#include<bits/stdc++.h>
using namespace std;
int arr[1000007];

int main()
{
    int n;
    cin>>n;
    int a,max=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        if(a>max)
            max=a;
        arr[a]++;
    }

    for(int i=0;i<=max;i++)
    {
        if(arr[i]>0)
            while(arr[i]--)
          cout<<i<<" ";
    }

}
