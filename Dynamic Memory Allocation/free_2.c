#include<stdio.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    int *ptr=(int *)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory Not Available");
    }
    for(i=0;i<n;i++)
    {
        printf("Enter a Value:");
        scanf("%d",ptr+i);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }
    printf("\n");
    free(ptr);
    for(i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }


}
