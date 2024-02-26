/*WAP to input string and remove the duplicated character from a string.*/
#include <stdio.h>
#include <string.h>
int main()
{
    char ch[20];
    printf("enter string:\n");
    gets(ch);
    int j, i, k;
    int len = strlen(ch);

    for (i = 0; i < len; i++)
    {
        for (j = i + 1; j < len;)
        {
            if (ch[i] == ch[j])
            {
                for (k = j; k < len; k++)
                {
                    ch[k] = ch[k+1];
                }
                --len;
            }
            else
            {
                ++j;
            }
        }
    }
    printf("\n%s", ch);
}


/*
#include <stdio.h>
#include <string.h>
int main()
{
    char ch[50];
    int  l, i, j, k = -1;
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
                ch[j] = k;
            }
        }
        if (ch[i] != k)
        {
            printf("\n%c  ", ch[i]);
        }
    }
}

*/
