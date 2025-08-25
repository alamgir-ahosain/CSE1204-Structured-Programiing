#include<stdio.h>
#include<string.h>
struct books{
    char title[50];
    char author[50];
    char subject[50];
   // int book_id;
} book1;
int main()
{
   // struct books book1;
    struct books book2;
    strcpy(book1.title,"c programming");
    strcpy(book1.author,"writter");
    strcpy(book1.subject,"solving problem");
    //strcpy(book1.book_id=123);



    strcpy(book2.title,"CP");
    strcpy(book2.author,"write");
    strcpy(book2.subject,"competetive programming");
   // strcpy(book2.book_id=098);


    printf("book1 title=%s",book1.title);
    printf("book1 author=%s",book1.author);
    printf("book1 subject=%s",book1.subject);
   // printf("book1 id=%d",book1.book_id);


    printf("book2 title=%s",book2.title);
    printf("book2 author=%s",book2.author);
    printf("book2 subject=%s",book2.subject);
   // printf("book2 id=%d",book2.book_id);
}
