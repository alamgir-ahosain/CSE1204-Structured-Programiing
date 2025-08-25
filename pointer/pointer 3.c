#include<stdio.h>

int main()
{
    int x=1,y=2,z[10]={1,2,3,4,5,6,7,8,9,10};
    int *ip;
    ip=&z[0];
    printf("*(ip+2)=%d\n",*(ip+2));
    printf("*ip=%d\n",*ip);
    *(ip=ip+2);
    printf("ip=ip+2=%d\n",*ip);
    *ip=*ip+10;
    printf("*ip=*ip+10=%d\n",*ip);
     ++(*ip);
    printf("++(*ip) =%d\n",*ip);
     (*ip)++;
    printf("*(*ip)++=%d\n",*ip);
     *ip++;
    printf("*ip++=%d\n",*ip);
    return 0;

}
