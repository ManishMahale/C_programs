#include<Stdio.h>
void main ()
{
	int i=0, j=1, k=2, m;
	m= i++ || j++ || k++;
	printf("%d%d%d%d",m,i,j,k);
}
