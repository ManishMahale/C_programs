#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<string.h>
struct student
{
    char name[90];
    int id;
    int fees;
};
struct student s1;
void insert();
void view();
void search();
void arrange();
int choice;
int main()
{
    do
    {
        printf("\n1:INSERT\n");
        printf("2:VIEW\n");
        printf("3:SEARCH\n");
        printf("4:ARRANGE\n");
         printf("5:Exit\n\n");
        printf("Enter a choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            _flushall();
            insert();
            break;
        case 2:
            view();
            break;
        case 3:
            _flushall();
            search();
            break;
        case 4:
        {
            arrange();
            break;
        }

        case 5:
        printf("Thack You\n");
        }
    } while (choice != 5);
}
void insert()
{
    FILE *fptr;
    fptr = fopen("F:\\Programs\\C_programs\\file_handling\\Student.txt", "a");
    printf("Enter a name id and fees of student\n");
    fgets(s1.name, 90, stdin);
    scanf("%d%d", &s1.id, &s1.fees);
    fprintf(fptr, "%s\t%d\t%d\n", s1.name, s1.id, s1.fees);
    printf("Data Store Succesfully....\n");
    fclose(fptr);
}
void view()
{
	int ch;
    FILE *fptr;
    fptr = fopen("F:\\Programs\\C_programs\\file_handling\\Student.txt", "r");
    
//    while (fscanf(fptr, "%s%d%d", &s1.name, &s1.id, &s1.fees) != -1)
//    {
//        printf("%s\t%d\t%d\n", s1.name, s1.id, s1.fees);
//    }
    
      do {
        ch = fgetc(fptr);
        printf("%c", ch);
 
        // Checking if character is not EOF.
        // If it is EOF stop reading.
    } while (ch != EOF);
    
    
    fclose(fptr);
}
void search()
{
    FILE *fptr;
    fptr = fopen("F:\\Programs\\C_programs\\file_handling\\Student.txt", "r");
    int flag = 0;
    char ch[90];
    printf("Enter a search name\n");
    gets(ch);
    while (fscanf(fptr, "%s%d%d", &s1.name, &s1.id, &s1.fees) != -1)
    {
        if (strcmp(s1.name, ch) == 0)
        {
            flag = 1;
            break;
        }
    }
    fclose(fptr);
    if (flag)
    {
        printf("Data Is Found\n");
        printf("%s %d %d", s1.name, s1.id, s1.fees);
    }
    else
    {
        printf("Data Is not found\n");
    }
}
void arrange()
{
    FILE *fptr;
    fptr = fopen("F:\\Programs\\C_programs\\file_handling\\Student.txt", "r");

    int count = 0, i = 0;

    while (fscanf(fptr, "%s\t%d\t%d\n", &s1.name, &s1.id, &s1.fees) != EOF)
    {
        count++;
    }
    fclose(fptr);
    struct student *s1 = (struct student *)malloc(count * sizeof(struct student));
    fptr = fopen("F:\\Programs\\C_programs\\file_handling\\Student.txt", "r");
    while (fscanf(fptr, "%s\t%d\t%d\n", &s1[i].name, &s1[i].id, &s1[i].fees) != EOF)
    {
        i++;
    }
    fclose(fptr);
    for (i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < (count); j++)
        {
            if (s1[i].fees < s1[j].fees)
            {
                struct student temp = s1[i];
                s1[i] = s1[j];
                s1[j] = temp;
            }
        }
    }
    printf("Display Result\n");
    for (i = 0; i < count; i++)
    {
        printf("%s\t:%d\t:%d\n", s1[i].name, s1[i].id, s1[i].fees);
    }
    fclose(fptr);
}
