#include<stdio.h>
int main()
{
int year;
printf("enter any year: ");
scanf("%d",&year);

(year%4==0 && year%100!=0) || year%400==0 ?
printf("\n year %d is leap",year): printf("\n year  %d is not leap",year);

return 0;
}