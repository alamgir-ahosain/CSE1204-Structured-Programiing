#include<stdio.h>

void strcpy(char *s,char *t)
{
    int i=0;
    while ((*t++=*s++)!='\0')
        ;

}

int main()
{
    char a[10000],b[10000];
    scanf("%s",&a);
    char *pt1=&a[0];
    char *pt2=&b[0];
    strcpy(a,b);
    printf("%s",b);

}
