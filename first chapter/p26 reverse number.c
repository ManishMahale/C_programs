// reverse three number

#include<stdio.h>
int main()
{
	int n;
	printf("enter number");
	scanf("%d",&n);
	
	n=((n%10) * 100) + (((n/10)%10)*10) + (n/100)*1;
	printf("reverse number: %d",n);
	
	return 0;
 } 
 
 /* input 123
	
	((n%10) * 100) =
	(123%10)= 3 
	3 * 100 = 300
	
	(((n/10)%10)*10) =
	123/10 = 12
	12 % 10 = 2 
	2 *10 = 20
	
	(n/100)*1 =
	123/100 = 1
	1* 1 =1
	
	300 +20 + 1 = 321  */
