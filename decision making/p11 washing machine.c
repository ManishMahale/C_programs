/*A washing machine works on the principle of Fuzzy System, the weight of clothes 

put inside it for washing is uncertain But based on weight measured by sensors, 

it decides time and water level which can be changed by menus given on the machine control area.  

For low level water, the time estimate is 25 minutes, where approximately weight is between 2000 grams or any nonzero positive number below that.

For medium level water, the time estimate is 35 minutes, where approximately weight is between 2001 grams and 4000 grams.

For high level water, the time estimate is 45 minutes, where approximately weight is above 4000 grams. */

#include<stdio.h>
int main()
{
	
	int weight, water, time;
	
	printf("enter weight of cloths: ");
	scanf("%d",&weight);
	
	if(weight==0)
	{
		printf("Time Estimated: 0 minutes");
	}
	else if(weight>=1 && weight<=2000)
	{
		printf("Time Estimated: 25 minutes");	
	}
	
	else if(weight>=2001 && weight<=4000)
	{
		printf("Time Estimated: 35 minutes");
	}
	
	else if(weight>=4001 && weight<=7000)
	{
		printf("Time Estimated: 45 minutes");
	}
	else if (weight>7000)
	 {
		printf("OVERLOADED");
	}
	
	else
	{
		printf("INVALIED INPUT");
	}
	
	return 0;
}
