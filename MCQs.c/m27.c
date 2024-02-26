#include <stdio.h>
#include <conio.h>
void main()
{
    int i = -4, j, num = 10;
    j = i % -3;
    j = (j ? 0 : num * num);
    printf("j = %d", j);
    getch();
}
/*
O/P =   j = 0

j= i % -3
 = -4 % -3
 = -1 (reminder)

j = ( j ? 0 : num * num)
  = ( -1 ? 0 : 100) //(condition true)
 j = 0 
*/