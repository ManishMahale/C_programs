// find sum of digits

#include<stdio.h>
int main()
{												// input 123
	int sum=0, n, rem;							// rem=n%10=123%10=3
												//sum=sum+rem = 0+3=3
	printf("enter number: ");					//n=n/10= 123/10= 12.3= 12
	scanf("%d",&n);								
												//rem=12%10= 2
	while(n>0)									//sem=3+2= 5
	{											//n=12/10= 1.2= 1
		rem=n%10;	
		sum= sum+rem;							//rem=1%10= 1
		n=n/10;								//sum=5+1= 6
	}											//1/10= 0.1= 0
											
	printf("sum of number: %d",sum);			//output 6
	return 0;
}