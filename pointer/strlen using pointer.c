/* #include<stdio.h>
#include<string.h>
int stren(char *s)
{
    int n;
    for(n=0;*s!='\0';s++)
    {
        n++;
    }

  return n;
}
int main()
{
    char s[100];
    //scanf("%s",s);
    gets(s);
    int x=stren(s);
    printf("%d",x);
} */
#include<stdio.h>
int str(char s[])
{
    int c=0;
    while(s[c]!='\0')
    {
        c++;
    }
    return c;
}
int main()
{
    char s[100];
    gets(s);
    printf("%d",str(s));
}