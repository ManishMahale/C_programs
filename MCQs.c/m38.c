// What will be the output of the following C code?
#include <stdio.h>
int main()
{
    int i = 0;
    do
    {
        i++;
        if (i == 2)
            continue;
        printf("In while loop ");
    } while (i < 2);
    printf("%d\n", i);
}

/* O/P:  In while loop 2

Inside the main function, an integer variable i is declared and initialized to 0.

The do-while loop is initiated. This type of loop executes the code block at least once,
and then it continues to execute the block as long as the given condition is true.

Within the do block, i is incremented by 1 using the i++ statement.

Following that, there is an if statement that checks if the value of i is equal to 2.
If the condition is true, the continue statement is executed.
The continue statement skips the remaining code in the current iteration of the loop
and proceeds to the next iteration.

If the continue statement is not executed (i.e., if i is not equal to 2),
the printf statement "In while loop" is executed. This statement is printed to the console.

The condition i < 2 is evaluated. If it is true,
the loop continues to the next iteration. If it is false, the loop terminates.

After the loop finishes, the line printf("%d\n", i); is executed.
This statement prints the value of i followed by a newline character to the console.

To summarize the code, it repeatedly prints "In while loop" as long as
the value of i is less than 2. However, when i equals 2, the continue statement is triggered,
skipping the printf statement for that specific iteration.
Finally, the code prints the value of i (which is 2) after the loop terminates.
Therefore, the output of this code will be: In while loop 2
*/