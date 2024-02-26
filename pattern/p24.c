1/*	 j= 1 2 3 4 5 6 7 8 9            i*j == 5*9
 i=	1           *    	   
	2         *   *        
	3       *   *   *      
	4     *   *   *   *    
	5   *   *   *   *   *  	        */
	   
#include<stdio.h>
int main()
{
	int i, j, k=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=9;j++)
		{
			if(j>=6-i && j<=4+i && k)
			{
				printf("*");
                 k=0;
			}
			else
			{	
		        printf(" ");
                k=1;
			}
		}
		printf("\n");
	}
	return 0;
}	   
	   
