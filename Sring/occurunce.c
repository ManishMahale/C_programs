#include <stdio.h>
#include <string.h>
int main()
{
    char ch[50];
    int count = 0, l, i, j, k = -1;
    printf("Enter String Value :");
    gets(ch);
    l = strlen(ch);
    for (i = 0; i < l; i++)
    {
        count = 1;
        for (j = i + 1; j < l; j++)
        {
            if (ch[i] == ch[j])
            {
                count++;
                ch[j] = k;
            }
        }
        if (ch[i] != k)
        {
            printf("\n%c----%d", ch[i], count);
        }
    }
}