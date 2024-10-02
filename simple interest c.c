//program to calculate the simple interest
/*
program to calculate the simple interest 
Author:Alvin 
Date:25/9/2024
*/
//preprocessor directive 
#include<stdio.h>
int main () {
int principal,rate,time,simpleinterest;
int p;
int t;
int r;
float si;
printf("enter the principal");
scanf("%d",&p);
printf("enter the time");
scanf("%d",&t);
printf("enter the rate");
scanf("%d",&r);
 si=(principal*rate*time)/100;
printf("simple interest:%f\n",si);
return 0 ;
}