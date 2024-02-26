/*	WAP to input string from keyboard and count vowels and consonant from a string?
Input: abcmnop
Output: 	Vowels  = 2 
           Consonant = 5
*/

#include<stdio.h>
#include<string.h>
int  main()
{
	int i;
	printf("enter range of string:\n");
	scanf("%d",&i);
	char ch[i];
	int v=0, c=0;
	printf("entr string:\n");
	_flushall();  
	gets(ch);
	printf("\n%s\n",ch);
	int count=0;
	while(ch[count]!='\0')
	{
		if(ch[count]=='a' || ch[count]=='A' || ch[count] == 'E'|| ch[count] =='e' || ch[count] =='I' 
		|| ch[count] =='i' || ch[count] == 'o' || ch[count]=='O' || ch[count]=='u' || ch[count]=='U')
		{
			++v;
		}
		else if(ch[count]!=' ')
		{
			++c;
		}
		count++;
	}
	printf("\n\nnumber of vowels:  %d",v);
	printf("\n\nnumber of consonent:  %d",c);
}
