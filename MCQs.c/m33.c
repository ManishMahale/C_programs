#include <stdio.h>
#include <conio.h>
void main()
{
    float a = 0.5, b = 0.9;
    if (a && b > 0.9)
        printf("IDLENESS IS A VIRTUE..");
    else
        printf("..SO IS STUPIDITY!");
    getch();
}

/* 
O/P: ..SO IS STUPIDITY!

if(a    &&  b > 0.9)
   0.5  &&  b > 0.9
   0.5  &&  0.9 > 0.9
   true       flase
    1          0

 if(0) //conditon false

 print else block

*/