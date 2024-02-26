#include<stdio.h>
int main()
{
   int a[5]={10,20,30,40,50},i,j,k,l;
   i=j=1;

   k=a[i++];
   j=a[++i]+10;
   l=a[i+1];
   printf("\nI=%d\tJ=%d\tK=%d\tL=%d\n",i,j,k,l);
    return 0;
}
/* o/p:
I=3     J=50    K=20    L=50

solution:
i=j=1

k=a[i++]
k=a[1] = 20
i++ = 2

j=a[++i]+10
++i=3
j=a[3]+10 = 40+10 = 50

l=a[i+1]+10
l=a[3+1]=a[4]= 50
*/