// create function name as void reverse(int) this function can accept input number as parameter and reverse it.
#include <stdio.h>
int main()
{
    int rev(int); // dec;aratoin
    int no, x;
    printf("Enter Number To Reverse:\n");
    scanf("%d", &no);
    rev(no); // calling
}

int rev(int no) // definition
{
    int rem, rev = 0;
    while (no != 0)
    {
        rem = no % 10;
        rev = rev * 10 + rem;
        no = no / 10;
    }
    printf("%d", rev);
}