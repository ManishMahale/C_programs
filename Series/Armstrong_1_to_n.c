/* print all Armstrong numbers between 1 to n
serise: 1 2 3 4 5 6 7 8 9 153 370 371 ......

Armstrong number:   153  it is Armstrong

 3   3    3
1 + 5  + 3  =   1  + 125 + 27  = 153

8208
 4   4   4   4
8 + 2 + 0 + 8   = 8208    */

#include <stdio.h>
#include <math.h>
int main()
{
  int n, count, p, sum, rem, i;
  printf("enter range: ");
  scanf("%d", &n);
  int temp;

  for (i = 1; i <= n; i++)
  {
    temp = i;
    count = 0;
    sum = 0;
    
    while (temp != 0)
    {
      temp = temp / 10;
      count++;
    }
    temp = i;
    
    while (temp != 0)
    {
      rem = temp % 10;
      p = pow(rem, count);
      sum = sum + p;
      temp = temp / 10;
    }
    
    if (i == sum)
    {
      printf("%d ", i);
    }
  }
  return 0;
}