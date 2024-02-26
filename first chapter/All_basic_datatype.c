//Write a C program to perform input/output of all basic data types.
#include<stdio.h>
int main()
{
int age;
printf("enter age: ");
scanf("%d",&age);
   
float height; 
printf("enter height: ");
scanf("%f",&height);

char name[20]; //name of type char array with a size of 20 to store the name (as a string).
printf("enter name: ");
scanf("%s",&name);  //%19s to read a string (character array) instead of a single character.
//i tried scanf("%s",name);  or scanf("%19s",&name); still working
printf("age:%d\nhight: %.2f\nname: %s",age,height,name);

return 0;
}
/*The %s format specifier tells the compiler to expect a string of characters, 
and the 20 in the char name[20] declaration tells the compiler to 
allocate enough memory to store a string of up to 20 characters.*/