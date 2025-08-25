
 /* #include <stdio.h>
#include <stdlib.h>


struct stu_address
{
  int street;
  char *state;
  char *city;
  char *country;
};
struct stu_data
{
  int stu_id;
  int stu_age;
  char *stu_name;
  struct stu_address stuAddress;
};
int main(){
  struct stu_data *mydata;
  mydata = (struct stu_data*)malloc(10*sizeof(struct stu_data));

  for(int i=0;i<10;i++)
  {
      mydata[i].stuAddress.country = (char*)malloc(16*sizeof(char));
  }

  /*mydata.stu_id = 1001;
  mydata.stu_age = 30;
  mydata.stu_name = "Chaitanya";
  mydata.stuAddress.state = "UP";
  mydata.stuAddress.street = 101;
  mydata.stuAddress.city = "Delhi";
  //mydata.stuAddress.country = "India";
  //mydata.stuAddress.country = (char*)malloc(16*sizeof(char));*/
 
  /*printf("\nStudent id: %d",mydata.stu_id);
  printf("\nStudent age: %d",mydata.stu_age);
  printf("\nStudent name: %s",mydata.stu_name);
  printf("\nStudent street: %d",mydata.stuAddress.street);
  printf("\nStudent state: %s",mydata.stuAddress.state);
  printf("\nStudent city: %s",mydata.stuAddress.city);*/ 

 







#include <stdio.h>
#include <stdlib.h>


struct stu_address
{
    int street;
    char *state;
    char *city;
    char *country;
};
struct stu_data
{
    int stu_id;
    int stu_age;
    char *stu_name;
    struct stu_address stuAddress;
};
int main()
{
    struct stu_data *mydata;
    mydata = (struct stu_data*)malloc(3*sizeof(struct stu_data));

    for(int i=0; i<3; i++)
    {
        // mydata[i].stu= (char*)malloc(16*sizeof(char));

        mydata[i].stuAddress.state= (char*)malloc(16*sizeof(char));
        mydata[i].stuAddress.city= (char*)malloc(16*sizeof(char));
        mydata[i].stuAddress.country= (char*)malloc(16*sizeof(char));
        //mydata[i].stuAddress.country= (char*)malloc(16*sizeof(char));

    }

    for(int i=0; i<3; i++)
    {
        scanf("%s",mydata[i].stuAddress.state);
        scanf("%s",mydata[i].stuAddress.city);
        scanf("%s",mydata[i].stuAddress.country);
    }
    for(int i=0; i<3; i++)
    {
        printf("Printing student Data: \n");
        printf("%s\n",mydata[i].stuAddress.state);
        printf("%s\n",mydata[i].stuAddress.city);
        printf("%s\n",mydata[i].stuAddress.country);
    }

    
    return 0;
}
