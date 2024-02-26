// A program with variable expressions in labels
#include <stdio.h>
int main()
{
int x = 2;
int arr[] = {1, 2, 3};
switch (x)  //swith(x) not allowed only constant allow like 1,3,7,3.14, 1+2
{
case arr[0]: printf("Choice 1\n");
case arr[1]: printf("Choice 2\n");
case arr[2]: printf("Choice 3\n");
}
return 0;
}

/* The expression provided in the switch should result in a constant
value otherwise it would not be valid. Some valid expressions for switch case will
be,
// Constant expressions allowed
switch(1+2+23)
switch(1*2+3%4)
// Variable expression are allowed provided
// they are assigned with fixed values
switch(a*b+c*d)
switch(a+b+c)  */
