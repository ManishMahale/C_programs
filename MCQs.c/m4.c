// A program with variable expressions in labels
#include <stdio.h>
int main()
{
    int x = 2;
    int arr[] = {1, 2, 3};
    switch (x)
    {
    case arr[0]:
        printf("Choice 1\n");
    case arr[1]:
        printf("Choice 2\n");
    case arr[2]:
        printf("Choice 3\n");
    }
    return 0;
}
/*
.The variable x is declared and assigned the value 2.
.An integer array arr is declared and initialized with values {1, 2, 3}.
.The switch statement is used to evaluate the value of x.
.The value of x is 2, so the case arr[0] is evaluated.
.Since the value of arr[0] is 1, which does not match the value of x, the code block associated with this case is skipped.
.The execution falls through to the next case.
.The case arr[1] is evaluated. The value of arr[1] is 2, which matches the value of x.
.The code block associated with this case is executed, which prints "Choice 2" to the console.
.Again, there is no break statement after this case, so the execution falls through to the next case.
.The case arr[2] is evaluated. The value of arr[2] is 3, but it does not match the value of x.
.The code block associated with this case is skipped.
.The execution of the switch statement is complete.
.The main function returns 0, indicating successful program execution.*/