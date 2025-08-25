#include<stdio.h>

int setbit(int n,int p)
{
    return(1<<p)|n;
}

int main()
{
    int n,p,s;
    scanf("%d%d",&n,&p);
    s=setbit(n,p);
    printf("%d",s);
}
