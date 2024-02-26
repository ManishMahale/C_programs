#include<stdio.h>
void main()
  {  int i,j;
    i=j=1;
    for(;j;printf("I=%d\tJ=%d\n",i,j)){
       j=i++<=5;
     }
   getch();
  }
/*O/P:
I=2     J=1
I=3     J=1
I=4     J=1
I=5     J=1
I=6     J=1
I=7     J=0
*/
