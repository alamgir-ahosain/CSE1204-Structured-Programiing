#include<stdio.h>
#include<string.h>
int str(char *ch)
{
    int n;
    for(n=0; *ch!='\0';ch++)
    {
        n++;
    }
    return n;
}
int main()
{

    char s[]="hello";
    printf("%d",str(s));
}
