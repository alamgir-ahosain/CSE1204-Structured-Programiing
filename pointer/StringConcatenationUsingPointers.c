#include<stdio.h>
void concat(char *p1,char *p2)
{
    while(*p1!='\0')
    {
        p1++;
    }
    while(*p2!='\0')
    {
        *p1=*p2;
        p1++;
        p2++;
    }
    *p1='\0';
}




int main()
{
    char s1[100],s2[100],*p1,*p2;
    gets(s1);
    gets(s2);
    concat(s1,s2);
    printf("%s",s1);

    } 
    