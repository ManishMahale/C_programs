// Write a C program to enter a number and print it in words.

#include <stdio.h>
int main()
{
    int rem, n, rev = 0;

    printf("enter a number: ");
    scanf("%d", &n); // input 123

    while (n != 0) // reverse logic
    {
        rem = n % 10; // reverse 321
        rev = rev * 10 + rem;
        n = n / 10;
    }

    while (rev != 0)
    {
        rem = rev % 10; // 321 % 10 = 1 
                        // 32  % 10 = 2
        switch (rem)    // 3   % 10 = 3
        {

        case 0:
            printf("zero ");
            break;

        case 1:
            printf("one "); //one
            break;

        case 2:
            printf("two "); //two
            break;

        case 3:
            printf("three "); //three
            break;

        case 4:
            printf("four ");
            break;

        case 5:
            printf("five ");
            break;

        case 6:
            printf("six ");
            break;

        case 7:
            printf("seven ");
            break;

        case 8:
            printf("eight ");
            break;

        case 9:
            printf("nine ");
            break;
        }
        rev = rev / 10; //  321 / 10 = 32
                        // 32 / 10 = 3
    }
    return 0;
}
//output:   123
//          one two three