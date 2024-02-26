/* WAP to print the following Series
1 11 111 1111 11111………n        */
#include <stdio.h>
int main()
{
    int no, i = 1;
    long int t = 1;
    printf("\nenter term\n");
    scanf("%d", &no); // 5

    while (i <= no)
    {
        printf("%d\t", t); // 1 	11	111
        t = (t * 10) + 1;  // t=1111
        i++;
    }

    return 0;
}
/*i/p:
enter number
5

o/p:
1       11      111     1111    11111
*/