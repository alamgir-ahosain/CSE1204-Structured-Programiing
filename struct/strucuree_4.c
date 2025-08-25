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
    struct stu_address *stuAddress;
};
int main()
{
    int n;
    scanf("%d", &n);
    struct stu_data *mydata;
    mydata = (struct stu_data *)malloc(n * sizeof(struct stu_data));

    for (int i = 0; i < n; i++)
    {
        (mydata + i)->stuAddress = (struct stu_address *)malloc(sizeof(struct stu_address));
        (mydata + i)->stuAddress->city = (char *)malloc(16 * sizeof(char));
        (mydata + i)->stuAddress->state = (char *)malloc(16 * sizeof(char));
        (mydata + i)->stuAddress->country = (char *)malloc(16 * sizeof(char));
        (mydata + i)->stu_name = (char *)malloc(16 * sizeof(char));
    }


    //member er memory allocated korte hobe

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&(mydata+i)->stu_id);
        scanf("%d",&(mydata+i)->stu_age);
        //gets((mydata+i)->stu_name);
        scanf("%s",(mydata+i)->stu_name);
        scanf("%d",&(mydata+i)->stuAddress->street);
        scanf("%s",(mydata+i)->stuAddress->state);
        scanf("%s",(mydata+i)->stuAddress->city);
        scanf("%s",(mydata+i)->stuAddress->country);
       // gets((mydata+i)->stuAddress->country);




    }
   
    for (int i = 0; i < n; i++)
    {
        printf("\nStudent id: %d", (mydata + i)->stu_id);
        printf("\nStudent age: %d", (mydata + i)->stu_age);
        printf("\nStudent name: %s", (mydata + i)->stu_name);
        printf("\nStudent street: %d", (mydata + i)->stuAddress->street);
        printf("\nStudent state: %s", (mydata + i)->stuAddress->state);
        printf("\nStudent city: %s", (mydata + i)->stuAddress->city);
        printf("\nStudent country: %s\n\n", (mydata + i)->stuAddress->country);
    }

    return 0;
 // then free kore dite hobe.
}