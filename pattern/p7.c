/*		*
	    * * 
	    * * * 
	    * * * *
	    * * * * *
	    * * * *
	    * * *
	    * *
	    *			*/
#include<stdio.h>
	
	int main()
	{
	  
	   int i,j;
	   
	   for(i=1;i<=9;i++)
	   {
	     for(j=1; j<=5; j++)
	     {
		if((i>=j && i<=5)|| (j<=10-i && i>5))
		{ printf("*");
		}
		else{
		  printf(" ");
		}
	     }
	     printf("\n");
	   }
	   return 0;
	}
	    
