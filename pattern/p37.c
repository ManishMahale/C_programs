/*
A
A	B	A
A	B	C	B	A
A	B	C	D	C	B	A
A	B	C	D	E	D	C	B	A	*/
#include <stdio.h>
int main()
{

	int i, j;
	for(i=1;i<=5;i++)
	{
		char ch='A';
		for(j=1;j<=9;j++)
		{
			
			if(j>=6-i && j<=4+i)
			{
				if(5>j)
				{
					printf("%c	",ch);
					ch++;
				}
				else
				{
					printf("%c	",ch);
					ch--;
				}
			}
		}
		printf("\n");
	}
	return 0;
}