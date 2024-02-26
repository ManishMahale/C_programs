#include <stdio.h>
int main()
{
    void show(int); // declaratoin
    show(5);        // initial calling

    return 0;
}

void show(int x)  //definition
{
    if (x != 0)
    {
        printf("Good Morning\n");
        show(--x);  //recursive call
    }
    else
    {
        printf("End");
    }
}