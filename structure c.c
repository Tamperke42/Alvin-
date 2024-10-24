// program to form a structure 
/*
Author: Alvin 
Date:24/10/2024
*/
#include<stdio.h>
#include<string.h>
struct student {
char name [30];
char email [20];
char regno[15];
char phonenumber;
char IDnumber;
int marks;
int height;
 };

int main (){
struct student student1, student2;
strcpy(student1.name,"Alvin");
student1.height=5.7;
strcpy(student1.regno,"CT101/G/22739/24");
strcpy(student1.email,"alvomugo54@gmail.com");
student1.phonenumber=123456;
student1.marks=60;
student1.IDnumber=546789245;


printf("name:%s\n",student1.name);
printf("height:%d\n",student1.height);
printf("reg no:%s\n",student1.regno);
printf("email:%s\n",student1.email);
printf("phone:%d\n",student1.phonenumber);
printf("marks:%d\n",student1.marks);
printf("IDnumber:%d\n",student1.IDnumber);
return 0;
}