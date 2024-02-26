#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *ptr;
    ptr = a;
    for (int i = 0; i < 5; i++)
    {
        *ptr = *ptr + 10;
        printf("%d\n", a[i]);
        ptr++;
    }
    return 0;
}
/*
O/P:
20
30
40
50
60

solution:
int a[5] = {10, 20, 30, 40, 50};
    int *ptr;  //pointer
    ptr = a;  //base address of array a assign to the pointer ptr  
    //base address mense = address of a[0]
    
    for (int i = 0; i < 5; i++)
    {
        *ptr = *ptr + 10;  // now *ptr can retrive value of  array a
        //so, a[0] + 10 = 20
        //a[1] + 10 = 30
        //a[2] + 10 = 40
        //a[3] + 10 = 50
        //a[4] + 10 = 60
        
        printf("%d\n", a[i]);
        ptr++;
    }

*/