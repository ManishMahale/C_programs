// What is the output of this C code?
#include <stdio.h>
int main()
{
    float f = 0.1;
    if (f == 0.1) // valude of f is in float(4 bytes) but valude of 1 is by default in duble(8 bytes)
        printf("True");
    else
        printf("False"); 
}
/* O/P: Fasle

*/