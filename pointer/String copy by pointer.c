#include<stdio.h>
#include<string.h>

void strcpy(char *s,char *t)
{
    int i=0;
    while ((*t=*s)!='\0')
    {
     t++;
     s++;
    }
    printf("%s",t);
}

int main()
{
    char a[10000],b[10000];
    scanf("%s",&a);
    strcpy(a,b);

}
