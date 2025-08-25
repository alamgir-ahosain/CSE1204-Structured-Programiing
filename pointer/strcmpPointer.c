#include<stdio.h>
int strcmp(char *p1,char *p2)
{
    int f=0;
 while(*p1!='\0' || *p2!='\0')
    {
        
        if(*p1!=*p2)
        {
            f=1;
            break;
        }
        p1++;
        p2++;
    }
    return f;
}
int main()
{
    int f;
    char s1[100],s2[100],*p1,*p2;
    gets(s1);
    gets(s2);
    f=strcmp(s1,s2);
   
    if(f==0) printf("equal");
    else printf("No");
}