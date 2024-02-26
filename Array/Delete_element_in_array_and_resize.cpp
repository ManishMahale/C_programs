#include <stdio.h>
int main()
{
    int arr[5];
    int deleteValue;
    int i, j, nSize = 0;
    printf("Enter five values:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value to delete ");
    scanf("%d", &deleteValue);
    for (i = 0; i < 5; i++)
    {
        if (arr[i] != deleteValue)
        {
            arr[nSize] = arr[i];
            nSize++;
        }
    }
    printf("new array is \n");
    for (i = 0; i < nSize; i++)
    {
        printf("a[%d]=%d\n", i, arr[i]);
    }
    printf("\n");
}
