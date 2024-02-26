//difference between odd digit and even digit ex. 1213= odd digit 1 + 1 + 3 = 5,,,even digit=2,,,defference = 5 - 2 == 3

#include<stdio.h>
int main()
{
	int n,rem,en=0,on=0;
	
	printf("Enter num: ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		rem=n%10;
		if(rem%2==0)
		{
			en=en+rem;
		}
		else
		{
			on=on+rem;
		}
		n=n/10;
		
	}
	if(en>on)
	{
		en=en-on;
		printf("%d",en);
	}
	else
	{
		on=on-en;
		printf("%d",on);
	}
	return 0;
}