#include<stdio.h>
#include<conio.h>
main()
{
int a,b;
float add,sub,mult,divi,mod;

clrscr();
printf("type any two number",a,b);
scanf("%d%d",&a,&b);
add=a+b;
sub=a-b;
mult=a*b;
divi=a/b;
mod=a%b;
printf("\naddition is %f",add);
printf("\nmult is %f",mult);
printf("\nsub is %f",sub);
printf("\ndivi is %f",divi);
printf("\nmod is %f",mod);
getch();
}