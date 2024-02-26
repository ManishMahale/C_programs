#include <stdio.h>
#include <conio.h>
void main()
{
    int a = 300, b = 10, c = 20;
    if (!(a >= 400))
        b = 300; // part of if statement
    c = 200;
    printf("b = %d   c = %d", b, c);
  getch();
}
/*
if(!(300>=400))
  (!(0))
  (1)
  
b is part of if statement
  b=300
  b==300

c is not part of if statement
c=200
c==200

O/P: b = 300   c = 200
*/