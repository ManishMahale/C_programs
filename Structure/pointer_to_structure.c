#include<stdio.h>
#include<stdlib.h>

struct Product
{
    int id;
    int price;
    char name[90];
};
struct Product *p;

int main()
{
    int size;
    printf("Enter product count:\n");
    scanf("%d", &size);

    p = (struct Product *)malloc(sizeof(struct Product) * size);
    if (p == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    int i;
    for (i = 0; i < size; i++)
    {
        printf("Enter product name, id, and price for product %d:\n", i + 1);
        scanf("%s %d %d", p[i].name, &p[i].id, &p[i].price);
    }
    printf("Display all elements:\n");

    for (i = 0; i < size; i++)
    {
        printf("Name: %s, ID: %d, Price: %d\n", p[i].name, p[i].id, p[i].price);
    }

    // Don't forget to free the allocated memory
    free(p);

    return 0;
}

