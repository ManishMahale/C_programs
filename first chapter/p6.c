#include<stdio.h>
int main ()
{
	int a=-5;
	int k=(a++ , ++a) ;
	printf("%d",k);
return 0;
}
