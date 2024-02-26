//What will be the output of the following C code?
#include <stdio.h>
int main()
{
int y = 10000;
int y = 34;
printf("Hello World! %d\n", y);
return 0;
}

/* O/P:
In function 'main':
c:6:5: error: redefinition of 'y'
 int y = 34;
     ^
c:5:5: note: previous definition of 'y' was here
 int y = 10000;

=> here veriable y declatare two times
*/