//program to find the units consumed 
/*
program to find the units consumed 
Author:Alvin 
Date:25/9/2024
*/
//preprocessor directive 
#include<stdio.h>
int main () {
int customerID;
char customernumber;
int unitconsumed;

printf("enter the customerID\n");
scanf("%d",& customerID);
printf("enter the customernumber\n");
scanf("%c",& customernumber);
printf("enter the unitconsumed\n");
scanf("%d",& unitconsumed);

float chargesperunit;
float units;
float totalamounttopay;

if (units>0 && units<=199)
    {chargesperunit=1.20;
    printf("%d\n",totalamounttopay);}
else if(units>199 && units<=399)
    {chargesperunit=1.50;
    printf("%d\n", totalamounttopay); }
else if(units>399 &&units<=599)
    {chargesperunit=1.80;
    printf("%d\n", totalamounttopay);}
else if(units>599)    
    {chargesperunit=2.00;
    printf("%d\n", totalamounttopay);};
    
    totalamounttopay=units*chargesperunit;
    
    if(totalamounttopay>400)
    {totalamounttopay =totalamounttopay*0.15;}
    if(totalamounttopay<100)
    {totalamounttopay=100;};
    
printf(" chargesperunit:%d\n", chargesperunit);
printf(" totalamounttopay:%d\n", totalamounttopay);

return 0;
}