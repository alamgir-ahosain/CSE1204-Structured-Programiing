#include<stdio.h>
int sum(int a,int b);
int triple(int c);
int result(int a,int b, int (*f)(int ,int));
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    int l=result(a,b,sum);
    printf("%d",l);

}
int sum(int a,int b)
{

    return (a+b);

}
int result(int a,int b, int (*f)(int a ,int b))
{
    return 3*f(a,b);
}
