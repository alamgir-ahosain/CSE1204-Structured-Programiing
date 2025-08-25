#include <stdio.h>
#include <string.h>

int main()
{
    char s1[200],s2[100];
    scanf("%s%s",s1,s2);
    int len=strlen(s1);
    int len2=strlen(s2);
    for(int i=0;i<len+len2;i++)
    {
        *(s1+len+i)=*(s2+i);
    }
    printf("%s\n",s1);

    return 0;
}
