/*
Pooja would like to withdraw X $US from an ATM. The cash machine will only accept the transaction if X is a multiple of 5,
and Pooja's account balance has enough cash to perform the withdrawal transaction (including bank charges).
For each successful withdrawal the bank charges 0.50 $US.
Calculate Pooja's account balance after an attempted transaction.
Input:
Positive integer 0 < X <= 2000 - the amount of cash which Pooja wishes to withdraw.
Nonnegative number 0<= Y <= 2000 with two digits of precision - Pooja's initial account balance.
Output:
Output the account balance after the attempted transaction, given as a number with two digits of precision.
If there is not enough money in the account to complete the transaction, output the current bank balance.
➡️Example - Successful Transaction
Input:
30 120.00
Output:
89.50
➡️Example - Incorrect Withdrawal Amount (not multiple of 5)
Input:
42 120.00
Output:
120.00
➡️Example - Insufficient Funds
Input:
300 120.00
Output:
120.00
*/
#include <stdio.h>
int main()
{
	int wa;
	float cb;
	printf("enter cb: ");
	scanf("%f", &cb);
	
	printf("enter wa: ");
	scanf("%d", &wa);

	if (cb <= 2000 && (wa + 0.5f) <= 2000 && wa % 5==0 )
	{
		cb = cb - wa - 0.5f;
		printf("cb = %.2f", cb);
	}
	else if (wa + 0.5f > cb)
	{
		printf("not sufficiant fund");
	}
	else
	{
		printf("invalid input");
	}
	return 0;
}