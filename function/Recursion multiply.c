#include<stdio.h>

int mult(int n)
{
   if(n==1)
   {
       return 1;
   }
   else
   {
       return n*mult(n-1);
   }
}

int main()
{
    int n,r=0;
    scanf("%d",&n);
    r=mult(n);
    printf("%d",r);
}
