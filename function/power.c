// create function name as Power(int,int) with two parameter of type integer and input base and index and calculate its power.
#include <stdio.h>
int main()
{
    void power(int, int);
    int base, index;
    printf("Enter Base:\n");
    scanf("%d", &base);

    printf("Enter Power\n");
    scanf("%d", &index);

    power(base, index);
    return 0;
}

void power(int base, int index)
{
    int r = 1;
    for (int i = 1; i <= index; i++)
    {
        r = r * base;
    }
    printf("%d",r);
}  
/*  //mathod - 2
#include <stdio.h>
int p = 1;
int getPower(int base, int index)
{
    if (index != 0)
    {
        while (index > 0)
        {
            p = p * base;
            --index;
        }
    }
    return p;
}

int main()
{
    int base, index;
    printf("Enter Base and Index:\n");
    scanf("%d%d", &base, &index);

    int power = getPower(base, index);
    printf("Power of %d = %d", base, power);
    return 0;
}*/