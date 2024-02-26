/*we have structure for Product with field
id, name and price and we want to create array of Product
structure and store 5 product details in it and arrange
all products in descending order*/
#include <stdio.h>
#include <string.h>

int i, j;
struct product
{
    int id;
    char name[90];
    int price;
};

struct product p[5], temp;
int main()
{
    for (i = 0; i < 5; i++)
    {

        printf("enter name:\n");
        fgets(p[i].name, 90, stdin);

        printf("enter id\n");
        scanf("%d", &p[i].id);

        printf("enter price\n");
        scanf("%d", &p[i].price);
    }

    printf("\n\nbefore sorting:\n\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s\t%d\t%d\n\n", p[i].name, p[i].id, p[i].price);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (p[i].price < p[j].price)
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    printf("\n\nAfter Sorting:\n\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s\t%d\t%d\n\n", p[i].name, p[i].id, p[i].price);
    }

    return 0;
}
