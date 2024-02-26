/*	WAP to input string and extract digit from a string and calculate its sum?
Input: abc123mno456stv
Output: 1+2+3+4+5+6= 21
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char ch[20];
    int sum = 0;

    printf("Enter string:\n");
    gets(ch);

    int i = 0;
    while (ch[i] != '\0')
    {
        if (ch[i] >= '0' && ch[i] <= '9'&& ch[i] != ' ')
        {
            // Convert the character digit to an integer and then add it to the sum
            sum = sum + (ch[i] - '0');
        }
        i++;
    }

    printf("Sum of digits: %d\n", sum);
}
