#include <stdio.h>
int main()
{
    float x = 1.1;
    switch (x)
    {
    case 1.1:
        printf("Choice is 1");
        break;
    default:
        printf("Choice other than 1, 2 and 3");
        break;
    }
    return 0;
}
/*In the code, the variable x is declared as a float and assigned the value 1.1. The switch statement is then used to evaluate the value of x.

However, there is an issue with the code. The switch statement in C does not support float values directly. It only works with integral types, such as integers or characters. When a float is used as the expression in a switch statement, the compiler typically generates an error.*/