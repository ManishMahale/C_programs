#include<stdio.h>
int main()
{
int a;
printf("\nenter any number");
scanf("%d",&a);
a%2==0 ? printf("\nnumber is even%d",a):printf("\nnumber is odd%d",a);
return 0;
}