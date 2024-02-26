//find power of any number

/* logic-1

#include <stdio.h>
int main()
{
  int base, index, i, p=1;
   printf("enter any number: ");
   scanf("%d",&base);
   printf("enter index: ");
   scanf("%d",&index);
   i=1;
   while(i<=index)
   {
      p=p*base;
      i++;
   }   
   printf("power is: %d",p);

   return 0;
}  */
//logoc-2
#include<stdio.h>
#include<math.h>
int main()
{
   int base, index, p;
   printf("entrer base and index: ");
   scanf("%d%d",&base, &index);
   p=pow(base,index);
   printf("power: %d",p);
   return 0;
}