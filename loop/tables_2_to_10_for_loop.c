//print all tables from 2 to 10 using a nested for loop.
#include <stdio.h>
#include <unistd.h> // to use usleep function

int main()
{
    int i, j;
    for (i = 1; i <= 10; i++) // row
    {
    	printf("\n");
        for (j = 2; j <= 10; j++) // column
        {
            printf("%d\t", i * j);
            usleep(100000); // Sleep for 100 milliseconds (100000 microseconds)
        }
        printf("\n");
    }
    return 0;
}

