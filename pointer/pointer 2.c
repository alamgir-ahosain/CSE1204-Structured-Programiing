#include<stdio.h>

int main()
{
    int x=1,y=2,z[10]={0,1,2,3,4,5,6,7,8,9};
    int matrix[3][3]={1,2,3,4,5,6,7,8,9};
    int *ip;
    ip=&z[1];
    printf("++*ip=%d\n",++*ip);      //Age value increment kore tarpor print kore
    printf("(*ip)++=%d\n",(*ip)++);   //Age print kore tarpor value increment kore
    printf("*ip++=%d\n",*ip++);      //index change kore
    return 0;

}
