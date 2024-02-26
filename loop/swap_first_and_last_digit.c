// swap first and last digit  ex. 1234 = 4231
#include <stdio.h>
#include <math.h>
int main()
{
    int no, first, last, count = 0, p, temp, p1;
    printf("Enter number\n");
    scanf("%d", &no); // 1234

    last = no % 10; // 1234 % 10 = 4

    temp = no;
    printf("Before Swapping %d\n", no);
    while (no != 0)
    {
        ++count;
        no = no / 10;
    } // count = 4
    no = temp;

    p = pow(10, --count); // pow(10,--count) = 10^3 = 1000
    first = no / p;       // 1234 / 1000 = 1
    no = no / 10;         // 1234 / 10 =123

    p1 = pow(10, --count);               // 10^2 = 100
    no = no % p1;                        // 123 % 100 = 23
    no = (last * p) + (no * 10) + first; // (4 * 1000) + (23 * 10) + 1 = 4000 + 230 + 1 = 4231

    printf("after swapping  %d\n", no);
    return 0;
}
