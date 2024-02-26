#include <stdio.h>
#include <conio.h>
void main()
{
    int x = 10, y = 5, p, q;
    p = x > 9;
    q = x > 3 && y != 3;
    printf("p = %d q = %d", p, q);
    getch();
}
/*
p= x > 9= 10 > 9 = condition true
➡️p =1

q=x > 3 && y != 3
  10>3 && 5!=3 (5 not equal to 3)
  true && true 
   1   &&   1
➡️q = 1   
*/