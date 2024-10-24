// program to define a structure called book
/*
Author:Alvin
Date:24/10/2024
Reg no : CT101/G/22739/24
*/
#include<stdio.h>
#include<string.h>
struct book {
char title[30];
char author[30];
char ISBN[13];
int publicationyear;
float price;
 };

int main (){

struct book book1, book2;
strcpy(book1.title,"Introduction to C programming");
strcpy(book1.author,"John Smith");
strcpy(book1.ISBN,"9780131103627");
book1.publicationyear=2022;
book1.price=49.99;

printf("title:%s\n",book1.title);
printf("author:%s\n",book1.author);
printf("ISBN:%s\n",book1.ISBN);
printf("publicationyeat:%d\n",book1.publicationyear);
printf("price:%.2f\n",book1.price);
return 0;
}