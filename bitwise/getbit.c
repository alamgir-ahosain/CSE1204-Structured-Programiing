#include<stdio.h>

int getbit(int n,int p)
{
    return(n>>p)&1;
}

int main()
{
    int n,p,s;
    scanf("%d%d",&n,&p);
    s=getbit(n,p);
    printf("%d",s);
}
