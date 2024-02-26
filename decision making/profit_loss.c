//find profit-loss

#include <stdio.h>
int main()
{
	int sell, buy, pro, loss;
	printf("enter buy price: ");
	scanf("%d",&buy);

	printf("enter sell price: ");
	scanf("%d",&sell);

	if(sell>pro)
	{
		pro=sell-buy;
		printf("profit of %d",pro);
	} 

	else if(buy>sell)
	{
		loss=buy-sell;
		printf("loss of %d",loss);
	}

	else
	{
		printf("no profit  & no loss");
	}

	return 0;
}