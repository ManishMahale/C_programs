#include <stdio.h>
#include <conio.h>
void main()
{
    if ('Z' < 'z')
        printf("Pilots are on strike...");
    else
        printf("for absolutely outlandish demands")
            getch();
}
/*
no semicolon ';' in else's printf statement

O/P= error: expected ';' before 'getch'
             getch();
             ^~~~~
*/