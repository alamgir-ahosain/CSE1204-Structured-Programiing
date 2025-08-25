#include<stdio.h>

int main()
{
    int i;
    int *ptr=(int *)malloc(2*sizeof(int));
    printf("Enter two value:");
    for(i=0;i<2;i++)
    {
        scanf("%d",ptr+i);
    }
    ptr=(int *)realloc(ptr,4*sizeof(int));
    for(i=0;i<2;i++)
    {
        printf("%d ",*(ptr+i));
    }
    printf("\nEnter two value again:");
    for(i=2;i<4;i++)
    {
        scanf("%d",ptr+i);
    }
    for(i=0;i<4;i++)
    {
        printf("%d ",*(ptr+i));
    }
}
