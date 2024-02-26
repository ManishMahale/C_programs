// There is no break in all cases
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
    default:
        printf("Choice other than 1, 2 and 3\n");
    }
    return 0;
}

/*The value of x is 2, so the case 2 is matched in the switch statement.
The code block associated with case 2 is executed, which prints "Choice is 2" to the console.
Since there is no break statement, the execution continues to the next case block.
The code block associated with case 3 is executed, which prints "Choice is 3" to the console.
Again, there is no break statement, so the execution falls through to the default case block.
The code block associated with the default case is executed, which prints "Choice other than 1, 2 and 3" to the console.*/