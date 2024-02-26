//find cube of any number

#include<stdio.h>
int main()
{
long int no,cube;

printf("enter any number: ");
scanf("%ld%",&no);
cube=no*no*no;
printf("\ncube is=%ld",cube);
return 0;
}