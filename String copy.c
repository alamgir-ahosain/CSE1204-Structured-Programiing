#include<stdio.h>

void strpy(char *s,char *t)
{
    int i=0;
    while ((*t=*s)!='\0')
    {
     t++;
     s++;
    }

}

int main()
{
    char a[10000],b[10000];
    scanf("%s %s",a,b);
    char *pt1=&a[0];
    char *pt2=&b[0]; 

    strpy(a,b);

    printf("%s",b);
}
