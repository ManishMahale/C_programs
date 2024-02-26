/*
Chef is watching TV. The current volume of the TV is XX.
Pressing the volume up button of the TV remote increases the volume by 11
while pressing the volume down button decreases the volume by 11.
Chef wants to change the volume from XX to YY.
Find the minimum number of button presses required to do so.
Input Format
• The first line contains a single integer TT - the number of test cases. Then the test cases follow.
• The first and only line of each test case contains two integers XX and YY - the initial volume and final volume of the TV.

Output Format
For each test case, output the minimum number of times Chef has to press a button to change the volume from XX to YY.
Constraints
1<=T <=100
1<=X<=Y<=100

 Input     Output

50  54       4
12  10       2
Explanation:
Test Case 1: Chef can press the volume up button 4 times to increase the volume from 50 to 54.
Test Case 2: Chef can press the volume down button 2 times to decrease the volume from 12 to 10.
*/

// ➡️ logic-1
#include <stdio.h>
int main()
{
    int current, button, required;
    printf("Enter current volume: ");
    scanf("%d", &current);

    printf("Enter volume required: ");
    scanf("%d", &required);

    if (required >= 1 && required <= 100 && current >= 1 && current <= 100)
    {
        if (current < required)
        {
            button = required - current;

            printf("button press to increase volume : %d times", button);
        }
        if (current > required)
        {
            button = current - required;

            printf("button press to decrease volume: %d times", button);
        }
    }
    return 0;
}
/*
➡️ logic-2  ➡️this is batter logic
#include <stdio.h>
int main()
{
    int current, button, required;
    printf("Enter current volume: ");
    scanf("%d", &current);

    printf("Enter volume required: ");
    scanf("%d", &required);

        if (current < required && current>=1 && required<=100)
        {
            button = required - current;

            printf("button press to increase volume : %d times", button);
        }
        if (current > required && required>=1 && current<=100)
        {
            button = current - required;

            printf("button press to decrease volume: %d times", button);
        }
    return 0;
}

*/