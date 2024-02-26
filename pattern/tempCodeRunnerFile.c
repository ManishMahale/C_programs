 #include <stdio.h>
 int main()
 {

	int i, j;
	for(i=1;i<=5;i++)
	{
		char ch='1';
		for(j=1;j<=9;j++)
		{

			if(j>=6-i && j<=4+i)
			{
				if(5>j)
				{
					printf("%c\t",ch);
					ch++;
				}
				else
				{
					printf("%c\t",ch);
					ch--;
				}
			}
		}
		printf("\n");
	}
	return 0;
}