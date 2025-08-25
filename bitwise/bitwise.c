#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h;
    scanf("%d%d",&a,&b);
    c=(a&b);
    d=(a|b);
    e=(a^b);
    f=(a<<2);
    g=(b>>3);
    h=(~a);
    printf("AND:%d\n",c);
    printf("OR:%d\n",d);
    printf("X-OR of a and b:%d\n",e);
    printf("Left shift:%d\n",f);
    printf("Right shif:%d\n",g);
    printf("NOT:%d",h);
}
