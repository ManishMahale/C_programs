#include<stdio.h>
int main()
{
    int A=100, *ptr1, **ptr2, ***ptr3;

    ptr1=&A;  //address of a asign to the ptr1

    ptr2=&ptr1; //address ptr1 of asign to the ptr2

    ptr3=&ptr2; //address ptr2 of asign to the ptr3

    printf("\nAddress of A %u\n\n",&A);
    
    printf("Address of A %u\n\n",ptr1);
   
    printf("Value of ptr1 %u\n",ptr1);
    printf("Address of ptr1 %u\n\n",&ptr1);
   
    printf("Value of ptr2 %u\n",ptr2);
    printf("Adress of ptr2 %u\n\n",ptr2);

    printf("Value of ptr3 %u\n",ptr3);
    printf("Address of ptr3 %d\n\n",&ptr3);

    printf("Value of A using ptr1 %u\n",*ptr1);   //to access value of veriable use *
    printf("Value of A using ptr2 %u\n",**ptr2);
    printf("Value of A using ptr3 %u\n",***ptr3);
    
    return 0;
}