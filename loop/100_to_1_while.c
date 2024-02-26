//print reverse natural numbers 100 to 1

#include <stdio.h>
int main()
{
    int i=1, n=100;
    while (i<=n)
    {
        printf("%10d\t",n); // each word print after 10 characters  " %10d "
        n--;
    }
    
    return 0;
}