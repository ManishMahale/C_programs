/*
1
1 2 1
1 2 3 2 1
1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1	*/
#include <stdio.h>
int main()
{
  int f = 1;
  int count;
  for (int i = 1; i <= 5; i++)
  {
    count = 1;
    for (int j = 1; j <= 9; j++)
    {
      if (i >= j || j < i * 2)
      {
        if (i > j)
        {
          printf("%d ", count);
          count++;
        }
        else
        {
          printf("%d ", count);
          count--;
        }
      }
      else
      {
        printf("  ");
      }
    }
    printf("\n");
  }
}

// logic -
//  #include <stdio.h>
//  int main()
//  {

// 	int i, j;
// 	for(i=1;i<=5;i++)
// 	{
// 		char ch='1';
// 		for(j=1;j<=9;j++)
// 		{

// 			if(j>=6-i && j<=4+i)
// 			{
// 				if(5>j)
// 				{
// 					printf("%c\t",ch);
// 					ch++;
// 				}
// 				else
// 				{
// 					printf("%c\t",ch);
// 					ch--;
// 				}
// 			}
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }