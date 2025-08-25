#include<stdio.h>
void copy(char *p1,char *p2)
{
    while(*p1!='\0')
    {
        *p2=*p1;
        p1++;
        p2++;
    }
    *p2='\0';
}

int main()
{
    char s1[100],s2[100];
    gets(s1);
    gets(s2);
    copy(s1,s2);
    printf("%s",s2);
}