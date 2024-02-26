// find prime number using while loop
// divisible by 1 and itself ex. 3 is divisible by 1 and 3 so 3 is prime num

// logic-1
#include <stdio.h>
int main()
{
	int i = 2, flag = 0, no;

	printf("enter number: ");
	scanf("%d", &no);

	while (i < no)
	{
		if (no % i == 0)
		{
			flag = 1;
			break;
		}

		i++;
	}

	if (flag == 0)
	{
		printf("\nprime number");
	}
	else
	{
		printf("\nnot a prime number");
	}
	return 0;
}

// logic-2 (no ' break; ' statement it will perform more itration, takes long time,, not recommended)

// #include<stdio.h>

// 	int main()
// 	{
// 	  int flag=0,n,i;
// 	  printf("enter number: ");
// 	  scanf("%d",&n);

// 	  for(i=1;i<=n;i++)
// 	  {
// 		if(n%i==0)   // i starts from 1
// 		{
// 			flag++;    //if cond. is true flag++   flag==1
// 				   	   //if cond. is true flag++   flag==2
// 		}
// 	  }
// 	  if(flag==2)  //prime num is divisible ny only 2 numbers
// 	  {
// 		printf("prime");

// 	  }
// 	  else
// 	  {
// 		printf("not prime");
// 	  }

// 	   return 0;
// 	}

