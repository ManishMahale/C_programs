// How many times i value is checked in the following C program?

#include <stdio.h>
int main()
{
    int i = 0;
    while (i < 3)
      i++;
   printf("In while loop\n");
}    
/* O/P: In while loop

value of i check only 1 time 

because there no curly brackets {} in whle loop
so it has no effect on code. 
although condition checked ones and its true
condition will not checked then because i++ not in while loop.
if there no while loop in this progran still
output well be the same.
printf function is separate.
if went to print i++ value you can do
O/P:  In while loop
      1
*/