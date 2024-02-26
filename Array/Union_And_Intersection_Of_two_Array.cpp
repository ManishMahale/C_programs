#include <stdio.h>

int main()
{

    int size1, size2, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size1);
    int arr1[size1];
    size1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the array: ");
    scanf("%d", &size2);
    int arr2[size2];
    size2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int unionArr[size1 + size2];
    int intersectionArr[size1 < size2 ? size1 : size2];
    int unionSize = size1;
    int intersectionSize = 0;

    // Copy elements of arr1 to unionArr
    for (int i = 0; i < size1; i++)
    {
        unionArr[i] = arr1[i];
    }

    // Check if elements of arr2 are already present in unionArr
    for (int i = 0; i < size2; i++)
    {
        int flag = 0;
        for (int j = 0; j < size1; j++)
        {
            if (arr2[i] == arr1[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            unionArr[unionSize] = arr2[i];
            unionSize++;
        }
    }
    printf("Union of the arrays: ");
    for (int i = 0; i < unionSize; i++)
    {
        printf("%d ", unionArr[i]);
    }
    printf("\n");

    // Check if elements of arr1 are present in arr2
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                intersectionArr[intersectionSize] = arr1[i];
                intersectionSize++;
                break;
            }
        }
    }

    printf("Intersection of the arrays: ");
    for (int i = 0; i < intersectionSize; i++)
    {
        printf("%d ", intersectionArr[i]);
    }
    printf("\n");

    return 0;
}
