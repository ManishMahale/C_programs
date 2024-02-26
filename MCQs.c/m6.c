#include <stdio.h>
int main()
{
    int x = 3;
    switch (x)
    {
    case 2:
        printf("Choice is 1");
        break;
    case 1 + 2:
        printf("Choice is 2");
        break;
    }
    return 0;
}
/*
.The variable x is declared and assigned the value 3.
.The case label 2 is encountered in the switch statement.
.Since the value of x is not equal to 2,
 the code block associated with this case is skipped.
.The next case label is 1+2, which evaluates to 3.
.Since the value of x is equal to 3.
.The code block associated with
 the case label 1+2 prints "Choice is 2" to the console.
.After executing the code block, a break statement is encountered,
 causing the switch statement to exit.
The main function returns 0, indicating successful program execution.
*/