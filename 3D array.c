// program to a 3D array 

#include<stdio.h>
int main () {
int a;
int b;
int c;
int marks[2][2][3]={
{{50,60,40},{30,90,50}}{{20,70,80},{10,15,65}} };
for(a=0;a<2;a++){
for(b=0;b<2;b++){
for(c=0;c<3;c++){
printf("marks[%d][%d][%d]=%d\n,",a,b,c,marks[a][b][c]);
}}}
return 0;
}