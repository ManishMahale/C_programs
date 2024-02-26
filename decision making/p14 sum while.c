//sum of 1 to 1o natural numbers
//logic 1	sum, i=1  ->>	sum=(i*(i+1))/2		<<- formula for sum of n nubers
//logic 2	sum=0,i=1	->> sum=sum+i
#include<stdio.h>

int main()
{
	int i=1, sum=0;
	 while(i<=10)
	 {
	 	//sum=(i*(i+1))/2;
	 	
		sum=sum+i;      
	 	
		 i++;
	 }
	 printf("sum: %d",sum);
	 
	 return 0;
}
