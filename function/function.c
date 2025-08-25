#include<stdio.h>
void swap(int x,int y);
int sum(int a,int b);
int main()
{
    int a,b;
    printf("Enter a and b:");
    scanf("%d %d",&a,&b);
    swap(a,b);
    int c=sum(a,b);
    printf("\n sum=%d",c);
    return 0;
}

void swap(int x,int y)
{
    int temp=x;
    x=y;
    y=temp;
    printf("after swapping a=%d and b= %d",x,y);
}
int sum(int a,int b)
{
    return (a+b);
}

