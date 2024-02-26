/*  check tringle valijd or not using if else	*/

#include<stdio.h>
int main() {
	int angle1 ,angle2, angle3, sum;
	
	printf("enter three angle:");
	scanf("%d%d%d",&angle1, &angle2, &angle3);
	
	sum= angle1 + angle2 + angle3; 
	
	if(sum==180) {
		
	printf("tringle is valid %d",sum);
	}
	
	else {
		printf("tringle is not valid %d",sum);
	}
	return 0;
	
}
