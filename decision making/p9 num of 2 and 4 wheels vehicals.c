/*	An automobile company manufactures both a two wheeler (TW) and a four
wheeler (FW). A company manager wants to make the production of both
types of vehicle according to the given data below:
• 1st data, Total number of vehicle (two-wheeler + four-wheeler)=v
• 2nd data, Total number of wheels = W
The task is to find how many two-wheelers as well as four-wheelers need to
manufacture as per the given data.	*/

#include<stdio.h>
int main()
{
	int w, fw, tw, v;
	
	printf("enter num of wheels: ");
	scanf("%d",&w);
	
	printf("enter num of vehicles: ");
	scanf("%d",&v);
	
	w= (v*4-w);
	tw=w/2;
	fw=v-tw; 
	
	printf("number of tw: %d\n",tw);
	printf("number of fw: %d\n",fw);


	printf("invalid input");
	return 0;
} // input w=540	v=200	output=	tw=130	fw=70
