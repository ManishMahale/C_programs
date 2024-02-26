/*if we want to read data from file we have fgetc() function and this function can read data from file and
return -1 or EOF when file has no data or when file is finish.
*/

#include <stdio.h>
int main()
{
    FILE *fptr;

    fptr = fopen("F:\\Programs\\C_programs\\file_handling\\read.txt", "r");
    char ch;
    do
    {
        ch = fgetc(fptr);
        printf("%c", ch);
        if (ch == -1)
        {
            break;
        }
    }
    while (1);
    fclose(fptr);
    printf("\nData Save Success................");
    return 0;
    
}