#include <stdio.h>
#include <stdlib.h>
#include "addComputer.h"

int department()
{
    int dept, i, size;

    FILE *fptr;
    struct addBook *add;
    add = (struct addBook *)malloc(sizeof(struct addBook) * size);

    printf("Enter Book Size\n");
    scanf("%d", &size);

    do
    {
        printf("Enter Ypur Choice:\n");

        printf("1 - Computer\n");
        printf("2 - Electrical\n");
        printf("3 - Civil\n");
        printf("4 - Electronics\n");
        printf("5 - Mechanical\n");
        printf("6 - Architecture\n");

        printf("Enter Department ID:\n");
        scanf("%s", &dept);

        switch (dept)
        {
        case 1:

            for (i = 0; i < size; i++)
            {
                printf("\nEnter ID\n");
                scanf("%d", &add[i].id);

                printf("Student Name\n");
                scanf("%s", &add[i].stname);

                printf("Book Name\n");
                scanf("%s", &add[i].name);

                printf("Author\n");
                scanf("%s", &add[i].author);

                printf("Quantity\n");
                scanf("%d", &add[i].quantity);

                printf("Price Of The Book\n");
                scanf("%d", &add[i].price);

                printf("Count Of Book\n");
                scanf("%d", &add[i].count);

                printf("Rack Nomber\n\n");
                scanf("%d", &add[i].rackno);
                addComputer(add[i]);
            }

            break;

            /* case 2:
                 fptr = fopen("Electrical.txt", "a");
                 fprintf(fptr, "%d \t %s \t %s \t %s \t %d \t %d \t %d \t %d\n", add.id, add.stname, add.name, add.author, add.quantity, add.price, add.count, add.rackno);
                 fclose(fptr);
                 printf("Book Added.............\n");

                 break;

             case 3:
                 fptr = fopen("Civil.txt", "a");
                 fprintf(fptr, "%d \t %s \t %s \t %s \t %d \t %d \t %d \t %d\n", add.id, add.stname, add.name, add.author, add.quantity, add.price, add.count, add.rackno);
                 fclose(fptr);
                 printf("Book Added.............\n");

                 break;

             case 4:
                 fptr = fopen("Electronics.txt", "a");
                 fprintf(fptr, "%d \t %s \t %s \t %s \t %d \t %d \t %d \t %d\n", add.id, add.stname, add.name, add.author, add.quantity, add.price, add.count, add.rackno);
                 fclose(fptr);
                 printf("Book Added.............\n");

                 break;

             case 5:
                 fptr = fopen("Mechanical.txt", "a");
                 fprintf(fptr, "%d \t %s \t %s \t %s \t %d \t %d \t %d \t %d\n", add.id, add.stname, add.name, add.author, add.quantity, add.price, add.count, add.rackno);
                 fclose(fptr);
                 printf("Book Added.............\n");

                 break;

             case 6:
                 fptr = fopen("Architecture.txt", "a");
                 fprintf(fptr, "%d \t %s \t %s \t %s \t %d \t %d \t %d \t %d\n", add.id, add.stname, add.name, add.author, add.quantity, add.price, add.count, add.rackno);
                 fclose(fptr);
                 printf("Book Added.............\n");

                 break;


            default:
            printf("Wrong Choice\n");
            break; */
        }

    } while (dept != 7);
}