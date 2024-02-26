#include <stdio.h>
 void add(float *x, float *y)
{
    printf("Add =%.2f\n", *x + *y);
    printf("Multi =%.2f\n", *x * *y);
    printf("Sub =%.2f\n", *x - *y);
    printf("Div =%.2f\n", *x / *y);
}
int main()
{
    float a, b;
    printf("\n Enter the number\n");
    scanf("%f%f", &a, &b);

    add(&a, &b); // call by references 
    return 0;
}
