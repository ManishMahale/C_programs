// find LCM (least/lowest Common Multiple) of two numbers

#include <stdio.h>

int main()
{
    int n, n1, max, lcm;

    printf("Enter first number\n");
    scanf("%d", &n);  //16
    printf("Enter second number\n");
    scanf("%d", &n1);  //20
    if (n > n1)  // (16 > 20)
    {
        max = n;
    }
    else
    {
        max = n1;   //max=20
    }
    while (1) // when loop is always true
    {
        if (max % n == 0 && max % n1 == 0)  // (20 % 16 == 4 && 20 % 20 == 0)  false
        {                                   // (21 % 16 == 5 && 21 % 20 ==1) false
            lcm = max;                      //continue till 80
            break;                          //(80 % 16 == 0 && 80 % 20 == 0)
        }
        max++; //21,22,23,....,80
    }
    printf("LCM = %d\n ", lcm);  //LCM = 80
    return 0;
}
/* 
   i/p:
   Enter first number
   16
   Enter second number
   20

   o/p:
   LCM = 80            
   
   solution:
   16 → 16, 32, 48, 64, ➡️80,… 

   20 → 20, 40, 60, ➡️80,…,      */