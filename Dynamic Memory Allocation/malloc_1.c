/*
Allocate block of memory
malloc-(void*) malloc(no of elements*size(int)
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    //printf("Enter size of array\n");
    scanf("%d",&n);
    int *a=(int*)malloc(n*sizeof(int));//dynamically allocated array

    //malloc initilized fills the garbage value
    for(int i=0; i<n; i++)
    {

        printf("%d ",a[i]);
    }

}
