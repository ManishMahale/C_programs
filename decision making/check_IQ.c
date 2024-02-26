/*
A study has shown that playing a musical instrument helps in increasing one's IQ by 77 points. Chef knows he can't beat Einstein in physics, but he wants to try to beat him in an IQ competition.
You know that Einstein had an IQ of 170170, and Chef currently has an IQ of XX.
Determine if, after learning to play a musical instrument, Chef's IQ will become strictly greater than Einstein's.
Print "Yes" if it is possible for Chef to beat Einstein, else print "No" (without quotes).
You may print each character of the string in either uppercase or lowercase (for example, the strings yEs, yes, Yes, and YES will all be treated as identical).
Input Format
• The first and only line of input will contain a single integer XX, the current IQ of Chef.
Output Format
• For each testcase, output in a single line "Yes" or "No"
• You may print each character of the string in either uppercase or lowercase (for example, the strings yEs, yes, Yes, and YES will all be treated as identical).
Constraints
100<=X<=169
Sample1
Input Output
165 Yes
Explanation
After learning a musical instrument, Chef's final IQ will be 165+7=172. Since 172 >= 170 Chef can beat Einstein.
Sample2
Input Output
120 No
Explanation:
After learning
*/
#include<stdio.h>
int main()
{
    int EI=170, IQ;
    printf("enter IQ: ");
    scanf("%d",&IQ);
   
    if(100<=IQ && IQ<=169)
    {
        printf("Before learning a musical instrument %d\n",IQ);
        IQ=IQ+7;
        printf("After learning a musical instrument %d\n",IQ);

        if(IQ>170)
        {
            printf("YES");
        }
        else
        {

            printf("NO");
        }
    }
    else
    {
        printf("please ente IQ between 100<=IQ<=169");
    }
    return 0;
}

