#include<stdio.h>
int main()
{

    FILE *fptr;
    fptr=fopen("new.txt","r");
    if(fptr==NULL) printf("does not exist");
    else
    {

        printf("file exist");
        fclose(fptr);
    }
}
