#include <stdio.h>
int count = 1;
int main()
{
    void table(int);

    int no;
    printf("Enter Number:\n");
    scanf("%d", &no);
    table(no);
    return 0;
}

void table(int x)
{
    if (count <= 10)
    {
        printf("%d\n", count * x);
        ++count;
        table(x);
    }
}