#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i=0,x,c,d=0,e,y,z,l,k,j,h,g,idx,indx,xx=0,yy=0;
    cin>>n;
    int a[n],b[n];
    cin>>x;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    
    if(x<b[n/2])
    {
         for(int i=0,e=n/2;i!=e;)
    {
    
        if(b[i]+b[e]>x)
        {
            e--;
        }
        else if(b[i]+b[e]<x)
        {
            i++;

        }
        else
        {
            y=b[i];
            z=b[e];
            d=1;
            break;
        }
       

    }
    }
    else{
        
    for(int i=0,e=n-1;i<e;)
    {
    
        if(b[i]+b[e]>x)
        {
            e--;
        }
        else if(b[i]+b[e]<x)
        {
            i++;

        }
        else 
        {
            y=b[i];
            z=b[e];
            d=1;
            break;
        }
       
         
    }
    }
    
 //  cout<<"y="<<y<<" z="<<z<<endl;
       
        if(d==0) cout<<"IMPOSSIBLE";
        else
        {
        for(int i=0;i<n;i++)
        {
           
            if(a[i]==z)
            {
                cout<<i+1<<" ";
                xx=1;

            }
            else if(a[i]==y)
          {
              cout<<i+1<<" ";
              yy=1;
          }
           
          if(xx==1 && yy==1) break;
 

        }
  }

} 
