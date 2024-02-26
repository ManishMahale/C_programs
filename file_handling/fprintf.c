/*we want to create file name as employee.txt and store employee name id and salary in file */

#include <stdio.h>
#include<string.h>
struct employee
{
    int id, sal;
    char name[20];
};
struct employee emp;
int main()
{
    FILE *fptr;
    fptr = fopen("F:\\Programs\\C_programs\\file_handling\\fprintf.txt", "a");
    printf("enter name, id, sal:\n");
    
    gets(emp.name);
    scanf("%d%d",&emp.id, &emp.sal);

    fprintf(fptr, "%s\t%d\t%d\n", emp.name, emp.id, emp.sal);
    printf("\nData Saved Successfully.....................");
    return 0;
}