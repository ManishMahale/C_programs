#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int i = 4;
    for (; i != -1;)
    {
        printf("%d\n", a[i--] + 40);
    }
    return 0;
}
/*
O/P: 
90
80
70
60
50

solution:
a[5] = {10, 20, 30, 40, 50};

i = 4
print = 50 + 40 = 90
i-- = 3

i = 3
print = 40 + 40 = 80
i-- = 2

i = 2
print = 30 + 40 = 70 
i-- = 

i = 1
print = 20 + 40 = 60
i-- = 0

i = 0  
print = 10 + 40 = 40
i = -1

i = -1
condition false

*/