//find power of a number using while loop

#include<stdio.h>

int main()
{
	int  p=1, base, index;
	printf("enter base: ");
	scanf("%d",&base);
	
	printf("enter index: ");
	scanf("%d",&index);
	
	int i=1;
	
	while(i<=index)
	{
		p= p * base;
		i++;
	}	
	printf("power of %d is %d\n",base,p);
	return 0;
	
}

/*i/p= base 2 , index 4 , p=1
p=p*b
p=1*2=2
p=2*2=4
p=4*2=8
p=8*2=16
*/
