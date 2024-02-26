#include <stdio.h>
int x;
void main()
{
    if (x)
        printf("hi");
    else
        printf("how are u");
}
/*
The variable x is declared globally but not initialized. In C, global variables are initialized to 0 by default.
The if statement is used to evaluate the value of x.
Since x has not been explicitly assigned a value, its value is 0 by default.
The condition if (x) is evaluated as false since the value of x is 0.
The code block associated with the else statement is executed.
The printf function within the else block prints "how are u" to the console.
The execution of the program is complete.
Therefore, the expected output of this code would be:

O/P:    how are u
*/