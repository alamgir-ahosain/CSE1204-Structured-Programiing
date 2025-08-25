#include<stdio.h>


int strcmp(char *a,char *b)
{

    for(;*a==*b;a++,b++)
    if(*a=='\0')
        return 0;
    return *a-*b;
}

int main()
{
    char a[1000],b[1000];
    scanf("%s",a);
    scanf("%s",b);
    char *s=&a[0];
    char *t=&b[0];
    if(strcmp(s,t)==0)
    {
        printf("Equal");
    }
    else if(strcmp(s,t)>0)
    {
        printf("First string is bigger");
    }
    else if(strcmp(s,t)<0)
    {
        printf("secend string is bigger");
    }
}
