#include <stdio.h>
#include <conio.h>
void main()
{
    int x = 3, y = 4, z = 4;
    printf("ans = %d", (z >= y >= x ? 100 : 200));
    getch();
}
/*O/P: ans = 200
(z >= y >= x ? 100 : 200)
(4 >= 4 >= x ? 100 : 200)
  true
(  1 >= 3 ? 100 : 200)
    false ? 100 : 200
     0  ? 100 : 200
     ans = 200
*/