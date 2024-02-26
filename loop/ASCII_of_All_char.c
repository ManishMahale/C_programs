//Write a C program to print all ASCII character with their values.

#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<=256;i++)  //total ascii valus =256
    {
        printf("%c = %d\n",i,i);
    }
    return 0;
}