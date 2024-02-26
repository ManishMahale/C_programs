// create function name as table with single parameter and input number and print its table.
#include <stdio.h>
int main()
{
    void table(int); // declaration
    int n;
    printf("Enter Nubmer To Print Table:\n");
    scanf("%d", &n);

    table(n); // calling,,,we sending value of n to the definition

    return 0;
}

void table(int x) // definition  or called function
{
    printf("\n");
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", i*x);
    }
}