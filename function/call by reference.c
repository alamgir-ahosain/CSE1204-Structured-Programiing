#include<stdio.h>
void swap(int *a,int *b )
{

    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{

    int a,b;
    //printf("enter a=");
    scanf("%d\n",&a);
   // printf("Enter b=");
    scanf("%d\n",&b);
    // scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("a=%d b=%d",a,b);


}