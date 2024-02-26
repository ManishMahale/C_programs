//we want to store data in file using single single character 
#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("F:\\Programs\\C_programs\\file_handling\\store.txt","a");
    char ch;
    printf("\nenter dada:\n");
    
    do
    {
        scanf("%c",&ch);
        if(ch=='$')
        {
            break;
        }
        fputc(ch,fptr);
    } while (1);
    
    fclose(fptr);
    printf("\nData Save Success...............");
    
    return 0;
}