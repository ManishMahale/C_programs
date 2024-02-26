/*WAP input 10 values in array find occurrence of array?
 Example: 10 20 30 10 20 30 10 20 30 10
10 ----- 4
20 ----- 3
30 -----3
*/

#include <stdio.h>
int main()
{
    int a[10], i, c1=0, c2=0, c3=0, c4=0, c5=0, c6=0, c7=0, c8=0, c9=0, c0=0;
    printf("enter arrays:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    int n;
    for (i = 0; i < 10; i++)
    {
    	n=a[i];
        switch (n)
        {
        case 0:
            c0++; 
            break;

        case 1:
            c1++; 
            break;
		
        case 2:
            c2++; 
            break;
            
        case 3:
            c3++; 
            break;

        case 4:
            c4++; 
            break;

        case 5:
            c5++;
            break;

        case 6:
            c6++; 
            break;

        case 7:
            c7++; 
            break;

        case 8:
            c8++; 
            break;

        case 9:
            c9++; 
            break;

        default:
        printf("invalid input");
            break;
        }
    }
    printf("\n0 --> %d\n",c0);
    printf("1 --> %d\n",c1);
    printf("2 --> %d\n",c2);
    printf("3 --> %d\n",c3);
    printf("4 --> %d\n",c4);
    printf("5 --> %d\n",c5);
    printf("6 --> %d\n",c6);
    printf("7 --> %d\n",c7);
    printf("8 --> %d\n",c8);
    printf("9 --> %d\n",c9);
}