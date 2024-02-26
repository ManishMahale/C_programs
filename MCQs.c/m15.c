#include <stdio.h>
#include <conio.h>
void main()
{
    int x = 11, y = 6, z;
    z = x == 51 | y ! = 4;  //space not allow after '!'  // it should be y !=4
    printf("z = %d", z);
    getch();
}
/* O/P:
c: In function 'main':
c:6:21: error: expected ';' before '!' token
  z = x == 51 | y ! = 4;  //space not allow after '!'  // it should be y !=4
                     ^
*/