// POP(insert data), PUSH(delete data), PEEK(search data)  in STACK
#include <stdio.h>
int main()
{
    int stack[5], top = -1, value, choice, i;
    int max = sizeof(stack) / sizeof(stack[0]);

    do
    {
        printf("\ntype 1 for inser the data in the stack:\n");
        printf("type 2 for delete the data from the stack:\n");
        printf("type 3 to display the data in the stack:\n");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            if (top == (max - 1))
            {
                printf("stack is overflow\n\n");
            }
            else
            {
                printf("enter valeu:\n");
                scanf("%d", &value);
                top = top + 1;
                stack[top] = value;
            }
            break;

        case 2:
            if (top == -1)
            {
                printf("stack is underflow\n\n");
            }
            else
            {
                // value=stack[top];
                // printf("\ndeleted value is: %d\n",value);
                top = top - 1;
            }
            break;

        case 3:
        if(top==-1)
        {
            printf("no data in the stack\n");
        }
            for (i = top; i >= 0; i--)
            {
                printf("stack[%d]------>%d\n", i,stack[i]);
            }
            break;

        default:
            printf("wrong choice");
        }

    } while (choice <= 3);
    return 0;
}
