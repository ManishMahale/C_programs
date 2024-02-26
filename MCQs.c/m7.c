// Program where two case labels have same value
#include <stdio.h>
int main()
{
int x = 2;
switch (x)
{ case 2: printf("Choice is 1");
break;
case 1+1: printf("Choice is 2");
break;
}
return 0;
}

/* x=2
.there are two case with value 2
.So it will throw error of duplicate case value
ERROR:
7.c: In function 'main':
7.c:9:1: error: duplicate case value
 case 1+1: printf("Choice is 2");
 ^~~~
7.c:7:3: error: previously used here
 { case 2: printf("Choice is 1");
   ^~~~
*/