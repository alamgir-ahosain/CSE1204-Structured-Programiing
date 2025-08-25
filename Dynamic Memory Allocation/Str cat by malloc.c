#include<stdio.h>
#include<string.h>

void stcat(char *a,char *b)
{
    int i=0,j=0;
    while(*(a+i)!='\0')
    {
        i++;
    }
    while(*(b+j)!='\0')
    {
        j++;
    }
    realloc(a,(i+j)*sizeof(char));
    j=0;
    while(*(b+j)!='\0')
    {
        *(a+i)=*(b+j);
        i++;
        j++;
    }

}

int main()
{
    char *a,*b;
    a=(char *)calloc(100,sizeof(char));
    b=(char *)calloc(100,sizeof(char));
    scanf("%s",a);
    scanf("%s",b);
    stcat(a,b);
    printf("%s\n",a);
    free(a);


}
