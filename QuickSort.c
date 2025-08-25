#include<stdio.h>
void qsort(int a[],int low,int high)
{
    if(low<high)
    {
        int pidx=partion(a,low,high);
        qsort(a,low,pidx-1);
        qsort(a,pidx-+1,high);
    }
}
int partion(int a[],int low,int high)
{
    int pivot=a[high];
    int i=low-1;
    for(int j=low;j<high;j++)
    {
        if(a[j]<pivot) {
            i++;
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;


           // swap(a,i,j);
        }

    }
    i++;
    int temp=a[i];
    a[i]=pivot;
    a[high]=temp;
    return i;
}
void printarray(int a[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}


/* void swap(int a[], int i, int j)
{
    int temp;
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
} */
int main()
{
    int n=4;
    int a[]={5,3,2,4};
    qsort(a,0,n-1);

      printarray(a, n);
}
