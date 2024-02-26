/* input number and check number is Armstrong or not
Example:   153  it is Armstrong

 3   3    3
1 + 5  + 3  =   1  + 125 + 27  = 153

8208
 4   4   4   4
8 + 2 + 0 + 8   = 8208

Steps to implement above code.
1) Count number of digit
2) Extract single single digit from number
3) Calculate power every digit as per count of number
  means here we have digit is base value and count is index value.
4) Calculate sum of every power value
5) if sum of power is equal with number then we can consider number is
  Armstrong if sum of power is not equal with number then we can consider number is not
  Armstrong.
*/

#include <stdio.h>
#include <math.h>
int main()
{
	int n, count = 0, p, sum = 0, rem;
	printf("enter number: ");
	scanf("%d", &n);
	int temp;
	temp = n;

	while (n != 0)
	{
		n = n / 10;
		++count;
	}
	n = temp;
	while (n != 0)
	{
		rem = n % 10;
		p = pow(rem, count);
		sum = sum + p;
		n = n / 10;
	}
	if (temp == sum)
	{
		printf("number is armstrong");
	}
	else
	{
		printf("number is not armstrong");
	}
	return 0;
}