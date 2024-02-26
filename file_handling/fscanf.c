#include <stdio.h>
#include<string.h>
#include<stdlib.h>
struct Employee
{
    int id;
    char name[90];
    int sal;
};
struct Employee emp;

int main()
{
    FILE *fptr;
    fptr = fopen("F:\\Programs\\C_programs\\file_handling\\fprintf.txt", "r");
    
    if (fptr == NULL)
    {
        printf("Error opening the file.\n");
        return 1;
    }

    int ch1 = fscanf(fptr, "%d%d", &emp.id, &emp.sal);
    fgetc(fptr); // Consume the newline character

    if (ch1 != 2)
    {
        printf("Error reading data from file.\n");
        fclose(fptr);
        return 1;
    }

    if (fgets(emp.name, 90, fptr) == NULL)
    {
        printf("Error reading name from file.\n");
        fclose(fptr);
        return 1;
    }

    // Remove the trailing newline from the name
   // emp.name[strcspn(emp.name, "\n")] = '\0';

    while (ch1 != EOF)
    {
        printf("%s\t%d\t%d\n", emp.name, emp.id, emp.sal);
        ch1 = fscanf(fptr, "%d%d", &emp.id, &emp.sal);
        
        if (ch1 != 2)
            break;
        
        fgetc(fptr); // Consume the newline character

        if (fgets(emp.name, 90, fptr) == NULL)
            break;

        emp.name[strcspn(emp.name, "\n")] = '\0';
    }

    fclose(fptr);
    return 0;
}
