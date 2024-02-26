#include<stdio.h>
void main()
{
   int a[5]={1,2,3,4,5},i,j,k,l;
   i=j=1;

   k=a[i++>>1];
   j=a[++i>>2]+10;
   l=a[i+1&1];
   printf("\nI=%d\tJ=%d\tK=%d\tL=%d\n",i,j,k,l);
    getch();
}
/*o/p:	I=3     J=11    K=1     L=1

solution:
i=j=1;

k=a[i++>>1]
k=a[1>>1]   //i is post increment i++ =2
binary of 1 = 0001 >> 1 = 0000
k=a[0] == 1

j=a[++i>>2]+10
j=a[3>>2]+10  // i is preincrement ++i=3
binary of 3 = 0011 >>2= 0000
j=a[0]+10 =1 + 10
j=11

l=a[i+1&1]
l=a[3+1 & 1] = a[4 & 1}
binary 4 =0100		1 = 0001
	 0100
	&0001
*/
