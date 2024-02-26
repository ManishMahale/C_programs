#include <stdio.h>
int main()
{
    int x = 2;
    switch (x)
    {
    case 1:
        printf("Choice is 1\n");
    case 2:
        printf("Choice is 2\n");
    case 3:
        printf("Choice is 3\n");
    case 4:
        printf("Choice is 4\n");
        break;
    default:
        printf("Choice other than 1, 2, 3 and 4\n");
        break;
    }
    printf("After Switch");
    return 0;
}
/*
.The variable x is declared and assigned the value 2.
.The value of x is 2, so the case 2 is matched in the switch statement.
.The code block associated with case 2 is executed, which prints "Choice is 2" to the console.
.Since there is no break statement after case 2, the execution falls through to the next case block.
.The code block associated with case 3 is executed, which prints "Choice is 3" to the console.
.Again, there is no break statement after case 3, so the execution falls through to the next case block.
.The code block associated with case 4 is executed, which prints "Choice is 4" to the console.
.After executing the code in case 4, a break statement is encountered. 
 This break statement causes the switch statement to exit, skipping the execution of subsequent cases.
.Since the break statement is encountered, the execution continues after the switch statement.
.The code outside the switch statement is executed, which prints "After Switch" to the console.
.Finally, the main function returns 0, indicating successful program execution.
*/