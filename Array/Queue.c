#include <stdio.h>
int main()
{
    int choice;
    int front = -1, rear = 0, queue[5], value, i;
    int max = sizeof(queue) / sizeof(queue[0]);
    do
    {
        switch (choice)
        {

        case 1:
            if (rear == max - 1)
            {
                printf("queue is fill");
            }
            else
            {
                rear = rear + 1;

                printf("enter value in the queue:\n");
                scanf("%d", &value);

                queue[rear] = value;
            }
            break;

        default:
        printf("wrong choice");
            break;
        }

        for (i = 0; i < max; i++)
            {
                printf("%d\t", queue[i]);
            }
    } while (choice<2);
}