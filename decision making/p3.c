/* check tringle is equilaterel, scalene or isosceles using if else  */

#include<stdio.h>
int main() {
	int s1, s2, s3;
	
	printf("enter three sides: ");
	scanf("%d%d%d",&s1,&s2,&s3);
	
	if(s1==s2 && s2==s3) {
		printf("tringle is equilateral");
	}
	
	else if(s1==s2 || s2==s3 || s3==s1) {
		printf("tringle is isosceles");
	}
	
	else {
		printf("tringle is scelene");
	}
	return 0;
}
