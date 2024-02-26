/*	                            0                        i*j=5*9    its fibinacii serise        
                        1               1
                2               3               5
        8               13              21              34
55              89              144             233             377			*/
	
#include<stdio.h>
int main()
{
	int i, j, k=1, fib, f1=0, f2=1;
	for(i=1;i<=5;i++)
	{	
		for(j=1;j<=9;j++)
		{
			
			if(j >=6-i && j<=4+i && k)
			{
				fib=f1+f2;
				f1=f2;	
				f2=fib;
				printf("%d\t",f2-f1);
				k=0;
			}
			else
			{
				printf(" \t");
				k=1;
			}
			
		}
		printf("\n");
	}
	return 0;
}
