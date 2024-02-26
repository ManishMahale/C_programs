#include<stdio.h>
#include<conio.h>
void main()
{ int x = 10;
if x >= 2
printf ("%d\n",x);
getch();
}
/*
no Parentheses in if Statement
O/P =  c:5:4: error: expected '(' before 'x'
       if x >= 2
          ^
*/