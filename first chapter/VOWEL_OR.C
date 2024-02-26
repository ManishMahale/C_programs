//c pogram to check whether character is vowel or not
#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf ("enter one character:\t");
scanf("%c",&ch);
ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u' ?
printf("\n %c char is vowel",ch):
printf("\n %c char is not vowel",ch);

getch();
}

/*
➡️Logic-2

#include <stdio.h>
int main()
{
	char ch;
	printf("enter alphabet: ");
	scanf("%c",&ch);
	if (ch=='a' || ch== 'e' || ch== 'i' || ch== 'o' || ch== 'u' || ch== 'A' || ch== 'E' || ch=='I' || ch=='O' || ch=='U')
		printf("vowel");
	else
	{
		printf("consonent");
	}

	return 0;
}
*/