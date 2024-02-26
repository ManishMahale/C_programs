// create function name as void checkPrime(int): you have to input number and check number  is prime or not using a function
#include <stdio.h>

int checkPrime(int no)
{
    int i, flag=0;

    if (no <= 1)
    {
        return 0; // Numbers less than or equal to 1 are not prime
    }

    for (i = 2; i < no; i++)
    {
        if (no % i == 0) 
        {
            flag=1; 
			break; // If there's a factor, it's not prime
        }
    }
	
	if(flag)
	{
		return 1;
	}
    else
    {
    	return 0;
	}
}
int main()
{

    int no;

    printf("Engter Number:\n");
    scanf("%d",&no);

    int result = checkPrime(no);

    if (result == 1)
    {
        printf("Not a Prime Number");
    }
    else
    {
        printf("Prime Number");
    }
    return 0;
}
