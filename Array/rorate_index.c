#include <stdio.h>
int main()
{
    int arr[5], i, j, temp, index;

    printf("entre array elements:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("enter index to rotate:\n");
    scanf("%d", &index);
    printf("\n");
    if (index < 5)
    {
        for (i = 0; i <= index; i++)
        {
            temp = arr[0];
            for (j = 0; j < 5; j++)
            {
                arr[j] = arr[j + 1];
            }
            arr[5 - 1] = temp;
        }
    }
    else
    {
        printf("\nentered array index is invalid");
    }
    for(i=0;i<5;i++)
    {
    	printf("%d  ",arr[i]);
	}
}
