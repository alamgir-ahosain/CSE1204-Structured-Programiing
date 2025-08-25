#include<stdio.h>

int sum(int n)
{
   if(n>=1)
   {
       return n+sum(n-1);
   }
   else
   {
       return 0;
   }
}

int main()
{
    int n,s=0;
    scanf("%d",&n);
    s=sum(n);
    printf("%d",s);
}
