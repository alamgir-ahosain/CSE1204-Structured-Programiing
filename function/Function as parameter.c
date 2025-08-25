#include<stdio.h>
int min(int a,int b);
int max(int a,int b);
int biyog(int a,int b,int(*x)(int a, int b),int(*y)(int a, int b));

int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    int ff=biyog(a,b,max,min);
    printf("%d",ff);

}
int min(int a,int b)
{
    if(a<b)return a;
    else return b;
}
int max(int a,int b)
{
    if(a>b) return a;
    else return b;
}

int biyog(int a,int b,int(*x)(int a, int b),int(*y)(int a, int b))
{
    return x(a,b)-y(a,b);

}
