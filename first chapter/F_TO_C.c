//enter temperature in celsius and convert into fahrenheit
//formiula for f->c   f=(9*c/5)+32 , c->f   c=(f-32)*5/9

#include<stdio.h>

int main()
{
int f;
float c;

printf("enter temp in fahrenheit: \n");
scanf("%d",&f);

c=(float)(f-32)*5/9;  //type casting to conver one datatype to another, here convert f int to float

printf("c: %f",c);
return 0;
}