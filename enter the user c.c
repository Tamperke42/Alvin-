// program to enter the user
/*
Author: Alvin 
Date:24/10/2024
Reg no :CT101/G/22739/24
*/
#include<stdio.h>
#include<string.h>
struct student {
char name [30];
char email [20];
char regno[15];
char phonenumber;
char idnumber;
int marks;
int height;
 };

int main (){

struct student student1, student2;

printf("enter your name: ");
scanf("%s" ,& student1.name);

printf("enter your height:");
scanf("%d",& student1.height);

printf("enter your reg no:");
scanf("%s",& student1.regno);

printf("enter your email:");
scanf("%s",& student1.email);

printf("enter your phonenumber:");
scanf("%d",&student1.phonenumber);

printf("enter your marks:");
scanf("%d",& student1.marks);

printf("enter your idnumber:");
scanf("%s",& student1.idnumber);

printf("name:%s\n",student1.name);
printf("height:%d\n",student1.height);
printf("reg no:%s\n",student1.regno);
printf("email:%s\n",student1.email);
printf("phone:%d\n",student1.phonenumber);
printf("marks:%d\n",student1.marks);
printf("idnumber:%s\n",student1.idnumber);
return 0;
}