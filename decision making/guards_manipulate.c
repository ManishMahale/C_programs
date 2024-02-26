/*
Ezio can manipulate at most XX number of guards with the apple of Eden.
Given that there are YY number of guards, predict if he can safely manipulate all of them.
Input Format
First line will contain TT, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers XX and YY.
Output Format
For each test case, print text {YES} YES if it is possible for Ezio to manipulate all the guards. Otherwise, print text {NO} NO.
You may print each character of the string in uppercase or lowercase
(For example, the strings text {Yes} YeS, text {yEs} yEs, \text {yes}yes and \text {YES}YES will all be treated as identical).
Constraints
1<=T<=100
1<=X<=Y
Sample1
_______________
Input Output
3
5 7 NO
6 6 YES
9 1 YES
*/

#include <stdio.h>
int main()
{
    int m, a;
    printf("enter guard to manupulet:  ");
    scanf("%d",&m);

    printf("enter available guards: ");
    scanf("%d",&a);

    if(m>=a)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}