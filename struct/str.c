#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int max=3;
int j=0;


struct parents
{
    char name[30];
    int age;
    int kid_count;
    char kid_name[30];
};

int main()
{
  for(j=0; j<max; j++)
  {
    struct parents parent[7];
    parent[j].name;
    parent[j].age;
    parent[j].kid_count;
    parent[j].kid_name;


    printf("Parent %d Enter parent name \n",j+1);
    scanf(" %s", &parent[j].name);


    printf("Parent %d Enter parent age \n",j+1);
    scanf(" %d", &parent[j].age);


    printf("Parent %d Enter how many kids he has \n",j+1);
    scanf(" %d", &parent[j].kid_count);


    printf("Parent %d child name \n",j+1);
    scanf(" %s", &parent[j].kid_name);
  }

  return 0;
}