// what will be output of given code?
#include <stdlib.h>
#include <stdio.h>
 
int main()
{
   int i = 1;
   do
   {
      printf("%d\n", i);
      i++;
      if (i < 15)
        continue;
   } while (0);
 
   getchar();
   return 0;
}

