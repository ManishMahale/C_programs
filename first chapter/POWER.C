//enter base and exponent then find result
//find power of any number by entering base and exponent

#include<stdio.h>
#include<math.h> 
int main()
{
int base, exp,result;
printf("enter base number: \n");
scanf("%d",&base);

printf("enter power: \n");
scanf("%d",&exp);

result=pow(base,exp);
printf("result is: %d\n",result);
return 0;
}