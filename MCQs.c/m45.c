
#include <stdio.h>
int main()
{

	int i;
	i = 0;
	while (i++)
	{
		printf("Good morning");
	}

	return 0;
}
/*
O/P: No output

reson while(0++) post increment so first is will perform operation then increment its value to 1
so while(0) 
there is no other statement	to execute	*/