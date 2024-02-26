//C program to check whether a character is uppercase or lowercase

#include<stdio.h>

int main()
{
char ch;

printf("enter char in any case: \n");
scanf("%c",&ch);
 ch>=65 && ch<=90 ? printf("character is in uppercase: %c\n",ch) // or  use-->  ch>='A' && ch<='Z'
:ch>=97 && ch<=122 ? printf("character is in lowercase: %c\n",ch) //  ch>='a' && ch<='z'
:ch>=48 && ch<= 57 ? printf("character is number: %c\n",ch)  // ch>='0' && ch<='9'
:printf("character is symbol: %c\n",ch);

return 0;
}