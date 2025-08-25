#include<stdio.h>
int main()
{
    int x=1,y=2;
    int *ip;
    ip=&x;
    printf("x address %d\n",ip);
    y=*ip;
    printf("y=%d\n",y);
    *ip=0;
    printf("x=%d",*ip);

}
