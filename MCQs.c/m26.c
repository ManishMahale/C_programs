#include <stdio.h>
#include <conio.h>
void main()
{
    int i = 10, j = 40;
    if ((j - i) % 10)
        printf("man sees your actions..");
    else
        printf("god sees your motives..");
    getch();
}

/*
if((j - i) % 10) = (40 - 10) % 10
 30 % 10 == 0

 if(0)
 zero in if condition mense condition is false

execute else
O/P =  god sees your motives..
*/