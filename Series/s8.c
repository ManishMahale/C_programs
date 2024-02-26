//16 1 14 4 12 9 10 16 8 25 6 36 4 49 2 

#include <stdio.h>
int main()
{
    int i;
    int s=18;
    
    for(i=1;i<=8;i++)
    {   
    s=s-2;
	printf("%d  ",s);
	printf("%d  ",i*i);	
	}
    return 0;
}
