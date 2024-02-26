/*  print following patten
	* * * * *
      * * * * 
	    * * *
	      * *
		    *  		*/
		   
#include<stdio.h>
int main()
{
	int i, j;
	for (i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i<=j)			// if you make small changes pattern will change try following 
			{
				printf("*"); 	// 1)try printf("* ") or printf(" *")
			}
			else				// 2)try printf("* ")
			{						//then delet else part
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;	
}