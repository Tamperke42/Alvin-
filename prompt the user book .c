// program to prompt the user

#include<stdio.h>
#include<string.h>
struct book {
char title [30];
char author [30];
char ISBN[13];
int publicationyear;
float price;
 };
 
int main (){
struct book book1, book2;

printf("enter the title: ");
scanf("%s",& book1.title);

printf("enter the author:");
scanf("%d",& book1.author);

printf("enter the ISBN:");
scanf("%s",& book1.ISBN);

printf("enter the publicationyear:");
scanf("%s",& book1.publicationyear);

printf("enter the price:");
scanf("%d",&book1.price);

printf("title:%s\n",book1.title);
printf("author:%s\n",book1.author);
printf("ISBN:%s\n",book1.ISBN);
printf("publicationyear:%s\n",book1.publicationyear);
printf("price:%f\n",book1.price);
return 0;
}