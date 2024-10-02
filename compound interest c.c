//program to calculate the compound interest 
/*
program to calculate the compound interest 
Author:Alvin 
Date:25/9/2024
*/
//preprocessor directive 
#include<stdio.h>
int main () {
float principal,rate,time,ci;
float p;
float t;
float r;
int n;
 ci=principal*(pow(1+rate/100,time)-1);
printf("enter principal");
scanf("%f",&p);
printf("enter time");
scanf("%f",&t);
printf("enter rate");
scanf("%f",&r);
printf("enter number of times interest is compounded per year");
scanf("%d",&n);
printf("compound interest:%f\n",ci);
return 0 ;
}