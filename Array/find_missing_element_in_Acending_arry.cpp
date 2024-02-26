// #include <stdio.h>
// int main()
//{
//     int size, i, j;
//      printf("enter  size in array\n ");
//     scanf("%d", &size);
//
//     int  a[size];
//      printf("enter  values in array\n");
//     for (i = 0; i < size; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("\n");
//     printf("missing element\n");
//     for (i = 0; i < size-1; i++)
//     {
//         for (j = a[i]; j < a[i + 1] - 1;)
//             printf("%d\n", ++j);
//     }
// }

#include <stdio.h>
int main()
{
	int i, j, arr[5];
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("enter array:\n");
	for (i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < len; i++)
	{
		if ((arr[i + 1] - arr[i]) > 1) // difference between  arr[i+1] - arr[i]
		{
			for (j = arr[i]; j < arr[i + 1] - 1;)
			{
				printf("%d  ", ++j);
			}
		}
	}
}
