/*      1    
        2*2
        3*3*3
        4*4*4*4
        5*5*5*5*5
        6*6*6*6*
        7*7*7*
        8*8*
        9*      */

        #include<stdio.h>
	
	int main()
	{
	  
	   int i,j;
	   
	   for(i=1;i<=9;i++)
	   {
	     for(j=1; j<=5; j++)
	     {
		if((i>=j && i<=5)|| (j<=10-i && i>5))
		{ 
			printf("%d",i);
			
			if(j<i)  //try  if(j<=i)
			{
				printf("*");
			}
		}
		else{
		  printf(" ");
		}
	     }
	     printf("\n");
	   }
	   return 0;
	}
	    
