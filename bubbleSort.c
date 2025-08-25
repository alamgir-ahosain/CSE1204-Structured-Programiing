#include <stdio.h>
int main()
{
    int i, j, n, tmp;
    FILE *rptr, *wptr;
    rptr=fopen("D:\\bubbleee\\input.txt","r");
    wptr=fopen("D:\\bubbleee\\out.txt","w");

   if(rptr==NULL) printf("does not exist\n");
    if (wptr == NULL) printf("not exist\n");

    fscanf(rptr,"%d",&n);
    int a[n];
    for (i =0;i<n;i++)
    {
        fscanf(rptr,"%d",&a[i]);
    }
    for (i =0;i<n-1;i++)
    {
        for (j=0;j<n-1;j++)
        {
            if (a[j]>a[j+1])
            {
                tmp = a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
    }
   // fprintf(wptr,"xfxgxgg")
    for (i=0;i<n;i++)
    {
        fprintf(wptr,"%d ",a[i]);
    }
    return 0;
}
