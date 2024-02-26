#include<stdio.h>
void main()
{
   int a[5]={1,2,3,4,5},i,j,k,l;
   
    i=a[0]+a[1]*2/5;
    j=a[1]*a[2]>>2+5; 
   printf("\nI=%d\tJ=%d  \n",i,j );
    getch();
}
/*o/p: I=1     J=0

solution:
a[5] = {1,2,3,4,5}, i, j, k, l
 
i=a[0]+a[1]*2/5;
i= 1 + 2 *2/2
i =1 + 4/5
i = (5+4)/5 = 9/5 =1.8
i=1

j=a[1]*a[2]>>2+5; 
j= 2 * 3 >> 2 + 5
j= 6 >> 7
j=0

*/
