#include <stdio.h>
int main()
{
    int i, j, k;
    i = j = k = 1;
    int a[5] = {10, 20, 30, 40, 50};
    int b = a[1];
    b += 10;
    a[i + 1] = --b + 1;
    int c = a[j++];
    int d = a[j + 1];
    printf("B= %d\tC=%d\tD=%d\n", b, c, d);
    return 0;
}

/*
O/P: B= 29   C=20    D=40

solution:

a[5] = {10, 20, 30, 40, 50};

b = a[1] = 20
b = b + 10 == 20 + 10 == 30

a[i + 1] = --b + 1
a[1 + 1] = --30 + 1
a[2] = 29 + 1
a[2] = 30
now , b == 29 

c = a[j++]
c = a[1++]  //post increment
c = a[1] == 20
j++ == 1++ == 2

d = a[j+1] == a[3] == 40

*/