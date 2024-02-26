// find third angle of tringle

#include<stdio.h>
int main()  {
	int angle1, angle2, angle3;
	printf("enter two angle: ");
	scanf("%d%d",&angle1, &angle2);
	
	angle3=180-angle1-angle2;  // or angle3= 180-angle1-angle2
	
	 printf("third angle is %d",angle3);
	 return 0;
	
}
