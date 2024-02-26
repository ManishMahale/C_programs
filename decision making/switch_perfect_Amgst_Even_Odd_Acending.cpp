#include <stdio.h>
int main()
{
    int choice;
    int i, j, k, no;
    int num, digit, sum;
    int arr[10];
    int size;
    do
    {
        printf("1. Print all perfect numbers\n");
        printf("2. Print all Armstrong numbers\n");
        printf("3. Sort and display array in ascending order\n");
        printf("4. Print even and odd numbers from an array\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("Perfect numbers: \n");
            printf("Enter the nth number ");
            scanf("%d", &no);
            for (i = 1; i <= no; i++)
            {
                sum = 0;
                for (j = 1; j <= i / 2; j++)
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
            printf("\n");
            break;
        }
        case 2:
        {
            printf("Armstrong numbers: \n");
            printf("Enter the nth number ");
            scanf("%d", &no);
            for (i = 1; i <= no; i++)
            {
                sum = 0;
                num = i;
                while (num > 0)
                {
                    digit = num % 10;
                    p = pow(rem, count)
                        sum = sum + p;
                    num = num / 10;
                }
                if (sum == i)
                {
                    printf("%d ", i);
                }
            }
            printf("\n");
            break;
        }
        case 3:
        {
            size = 18;
            printf("Enter %d elements: ", size);
            for (i = 0; i < size; i++)
            {
                scanf("%d", &arr[i]);
            }
            for (i = 0; i < size - 1; i++)
            {
                for (j = 0; j < size - i - 1; j++)
                {
                    if (arr[j] > arr[j + 1])
                    {
                        int temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }
            printf("Sorted array: ");
            for (i = 0; i < size; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;
        }
        case 4:
        {
            size = 18;
            printf("Enter %d elements: ", size);
            for (i = 0; i < size; i++)
            {
                scanf("%d", &arr[i]);
            }
            printf("Array elements: ");
            for (i = 0; i < size; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
            printf("Even numbers: ");
            for (i = 0; i < size; i++)
            {
                if (arr[i] % 2 == 0)
                {
                    printf("%d ", arr[i]);
                }
            }
            printf("\n");
            printf("Odd numbers: ");
            for (i = 0; i < size; i++)
            {
                if (arr[i] % 2 != 0)
                {
                    printf("%d ", arr[i]);
                }
            }
            printf("\n");
            break;
        }
        case 5:
        {
            printf("Exiting the program. Bye!\n");
            break;
        }
        default:
        {
            printf("Invalid choice. Please enter a valid option.\n");
            break;
        }
        }
    } while (choice != 5);
    return 0;
}