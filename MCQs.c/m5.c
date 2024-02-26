// Statements before all cases are never executed
#include <stdio.h>
int main()
{
    int x = 1;
    switch (x)
    {
        x = x + 1; // This statement is not executed
    case 1:
        printf("Choice is 1");
        break;
    case 2:
        printf("Choice is 2");
        break;
    default:
        printf("Choice other than 1 and 2");
        break;
    }
    return 0;
}
/*
.The variable x is declared and assigned the value 1.
.The switch statement is used to evaluate the value of x.
.The code x = x + 1; is written before the case labels, but this statement is not executed because it appears outside of any case block.
.The value of x is 1, so the case 1 is matched in the switch statement.
.The code block associated with case 1 is executed, which prints "Choice is 1" to the console.
.The break statement is encountered, causing the switch statement to exit.
.The main function returns 0, indicating successful program execution.
*/