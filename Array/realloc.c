#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, *ptr, rmanp, emanp, ethali, osthali, nthali;
	
	printf("Enter Number OF Thali:\n");
	scanf("%d",&nthali);
	
	rmanp=(nthali)/10;
	ptr=(int*)malloc(sizeof(int)*rmanp);
	
	printf("Enter Employee Code:\n");
	for(i=0;i<rmanp;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("Enter On Spot Thali:\n");
	scanf("%d",&osthali);
	
	if(osthali>nthali)
	{
		ethali=osthali-nthali;
		emanp=ethali/10;
		ptr=(int*)realloc(ptr,sizeof(int)*emanp); //extend alloted memory by malloc
		
		printf("Enter employee code for extra man power\n");
		for(i=rmanp; i<(rmanp+emanp); i++)
		{
			scanf("%d",&ptr[i]);
		}
		
		printf("\nDisplay all employee code\n");
		for(i=0;i<(rmanp+emanp);i++)
		{
			printf("ptr[%d]----->%d\n",i,ptr[i]);
		}
	}
	else
	{
		printf("No Need To Extend Man Power");
	}
	
	free(ptr);  //free alloted memory
	
	return 0;
}
/*
Enter Number OF Thali:
100
Enter Employee Code:
1
2
3
4
5
6
7
8
9
10
Enter On Spot Thali:
110
Enter employee code for extra man power
11

Display all employee code
ptr[0]----->1
ptr[1]----->2
ptr[2]----->3
ptr[3]----->4
ptr[4]----->5
ptr[5]----->6
ptr[6]----->7
ptr[7]----->8
ptr[8]----->9
ptr[9]----->10
ptr[10]----->11
*/
