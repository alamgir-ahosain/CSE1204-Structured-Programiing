#include<stdio.h>
int main()
{
    int z[10]= {1,2,3,4,5,6,7,8,10};
    int i=0;
    int *ip;
    ip=&z[0];
    printf("*(ip+2)=%d\n",*(ip+2));//3
    printf("*ip= %d\n",*ip);//1
    *(ip=ip+2);
    printf("*(ip=ip+2)= %d\n",*ip);//3

    *ip=*ip+10;
    printf("*ip=*ip+10= %d\n",*ip);//13
    ++*ip;
    printf("++*ip=%d\n",*ip);//14
    *ip=*ip+10;
    printf("*ip=*ip+10= %d\n",*ip);//24
    ++(*ip);
    printf("++(*ip)=%d\n",*ip);//25
    (*ip)++;
    printf("(*ip)++=%d\n",*ip);//26
    *ip++;
    printf("*ip++ = %d\n",*ip);//4
    return 0;

}
//*ip++;===addrress    (*ip)++==value
//*(++ip)===address

