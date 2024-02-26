#include <stdio.h>
#include <math.h>
int main()
{
    int count, temp, i, c, n, j, sum, rem, p, a[5];
    do
    {
        printf("\nenter case number between 1 to 4: \n1: perfect nuber serise \n2: armstrong serise\n3: assending order\n4: even-odd \n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            printf("\nenter range to find perfect number: \n");
            scanf("%d", &n);

            for (i = 1; i <= n; i++)
            {
                sum = 0;
                for (j = 1; j < i; j++)
                {
                    if (i % j == 0)
                    {
                        sum = sum + j;
                    }
                }
                if (sum == i)
                {
                    printf("%d ", i);
                }
            }
            break;
        case 2:
            printf("\nenter range to find armstrong number: \n");
            scanf("%d", &n);

            for (i = 1; i <= n; i++)
            {
                sum = 0;
                count = 0;
                temp = i;
                while (temp != 0)
                {
                    temp = temp / 10;
                    count++;
                }
                temp = i;
                while (temp != 0)
                {
                    rem = temp % 10;
                    p = pow(rem, count);
                    sum = sum + p;
                    temp = temp / 10;
                }

                if (sum == i)
                {
                    printf("%d\n", i);
                }
            }

            break;
        case 3:

            printf("enter 5 values of array to arrange it in assending order: ");
            scanf("%d", &a[i]);

            break;
        case 4:
            printf("Enter 5 values to find even odd: ");
            for (i = 0; i < 5; i++)
            {
                scanf("%d", &a[i]);
            }
            printf("Even Numbers: ");
            for (i = 0; i < 5; i++)
            {
                if (a[i] % 2 == 0)
                {
                    printf("%d ", a[i]);
                }
            }
            printf("\n");
            printf("Odd Numbers: ");
            for (j = 0; j < 5; j++)
            {
                if (a[j] % 2 == 1)
                {
                    printf("%d ", a[j]);
                }
            }
            break;
        case 5:
            printf("thank you....");
        }

    } while (c <= 4);
}