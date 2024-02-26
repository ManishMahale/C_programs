//calculate area of equilateral trignle
//formula area = (1/4)*sqrt(3)*base^2 =0.25*1.73*base^2
#include<stdio.h>
#include<math.h>
void main()
{
int base;
float area;
scanf("%d",&base);

base=pow(base,2);
area= 0.25 * 1.73*base;

printf("area: %f",area);
return 0;
}