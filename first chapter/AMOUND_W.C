#include<stdio.h>
int main()
{
int a,b,c;

printf("enter three values/t");
scanf("%d%d%d",&a,&b,&c);
a==b && b==c ? printf("\n tringle is equllateral")
: a==b && b=!c ? printf("\n tringle is scelen")
: a=!b && b=!c ? printf("\n tringle is isosceles") :
return 0;
}