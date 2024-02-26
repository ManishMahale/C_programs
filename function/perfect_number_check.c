// create function name as void findPerfect(int) you have to input number and check number is perfect or not
#include <stdio.h>

int findPerfect(int no)  //definition
{
    int i, j, sum = 0;
    for (i = 1; i < no; i++)
    {
        if (no % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == no)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}
int main()
{
    int no, result;

    printf("Enter Number:\n");
    scanf("%d", &no);

    result = findPerfect(no);  //calling

    if (result)
    {
        printf("\nPerfect Number\n");
    }
    else
    {
        printf("Not a Perfect Number\n");
    }
}