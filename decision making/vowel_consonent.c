/* check alphabet is vowel or consonat usingif else  */

#include<stdio.h>
int main() 
{
	char ch;
	printf("enter any alphabet: \n");
	scanf("%c",&ch);

	
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'  ||ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') 
	{
		
		printf("alphabet is vowel  %c",ch);
	}
	
	else
	{
		printf("alphabet is consonant  %c",ch);
	}
	return 0;
}
