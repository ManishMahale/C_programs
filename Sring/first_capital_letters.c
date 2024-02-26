/* WAP to input string and convert every word first letter as capital
Input: abc mno pqr
Output: Abc Mno Pqr
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    printf("enter range:\n");
    scanf("%d",&i);
    char ch[i];
    printf("enter string\n");
    _flushall();
    gets(ch);
    int count = 0,c=0, a;
    while (ch[count] != '\0')
    {
        if (count == 0)
        {
            if (ch[count] >= 97 && ch[count] <= 122)
            {
                ch[count] = ch[count] - 32;
            }
        }
        else 
        {
            if(ch[count] == 32)
            {
            a=count;	
            c++;
            }
            
        }

        count++;
    }
    if(c==1){
    	 ch[a+c]=ch[a+c]-32;
	}
	
	else
	{
		 ch[a+c-1]=ch[a+c-1]-32;
	}
    
   
    printf("%s", ch);
}
