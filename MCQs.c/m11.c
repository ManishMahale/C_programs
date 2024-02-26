#include <stdio.h>
void main()
{
    int ch;
    printf("enter a value between 1 to 2:");
    scanf("%d", &ch);
    switch (ch, ch + 1)
    {
    case 1:
        printf("1\n");
        break;
    case 2:
        printf("2");
        break;
    }
}
/*
switch(ch,ch+1) //input=1
        1,1+1
        1,2     //now ch=2
case 2 will execcute

input=2
switch(2,2+1)
       2,3  //now ch=3
there is no case 3
so it will not throw any output       
*/